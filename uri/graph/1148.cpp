#include <bits/stdc++.h>
#define MAX 510
#define INF INT_MAX

using namespace std;

int visitados[MAX], distancia[MAX], grafo2[MAX][MAX];
int v, a;
int x, y, p;

void limpaGrafo(){
	for(int i = 0; i <= v; ++i)
		for(int j = 0; j <= v ; ++j){
			grafo2[i][j] = INF;
		}
}

void limpaVeD(){
	for(int i = 0; i <= v; ++i){
		visitados[i] = 0;
		distancia[i] = INF;
	}
}

void dijkstra(int inicio, int fim){
	distancia[inicio] = 0;
	int menor_dist, index;

	for(int i = 0; i < v-1; ++i){
		menor_dist = INF;
		for(int j = 1; j <= v; ++j){
			if(!visitados[j] && menor_dist > distancia[j]){
				index = j;
				menor_dist = distancia[j];
			}
		}
		if(menor_dist == INF) return;
		visitados[index] = 1;
		if(visitados[fim]) return;

		for(int j = 1; j <= v; ++j){
			int path = grafo2[index][j] + menor_dist;
			if(grafo2[index][j] != INF && path < distancia[j]){
				distancia[j] = path;

			}
		}
	}
}

int main(){
	

	while(scanf("%d %d", &v, &a) && (v || a)){
		limpaGrafo();
		while(a--){
			scanf("%d %d %d", &x, &y, &p);
			if(grafo2[y][x] != INF){
				grafo2[y][x] = 0;
				grafo2[x][y] = 0;
			}else{
				grafo2[x][y] = p;
			}
		}

		scanf("%d", &p);
		while(p--){
			limpaVeD();
			scanf("%d %d", &x, &y);
			dijkstra(x, y);
			int result = distancia[y];
			if(result != INF)
				cout << result << endl;
			else
				cout << "Nao e possivel entregar a carta" << endl;

		}
		printf("\n");
		
	}
	
	return 0;
}