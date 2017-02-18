#include <bits/stdc++.h>

int grafo [110][110];
int v, a, x, y, p;

using namespace std;

void floyd(){
	for(int k = 1; k <= v; ++k){
		for(int i = 1; i <= v; ++i){
			for(int j = 1; j <= v; ++j){
				if(grafo[i][k] * grafo[k][j] > grafo[i][j]){
					grafo[i][j] = grafo[i][k] * grafo[k][j];
				}
			}
		}
	}


}

int main(){

	while(scanf("%d", &v) && v){
		memset(grafo, -1, sizeof grafo);
		scanf("%d", &a);
		while(a--){
			scanf("%d %d %d", &x, &y, &p);
			grafo[x][y] = p;
			grafo[y][x] = p;


		}

	}


	return 0;
}