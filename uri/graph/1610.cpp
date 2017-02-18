#include <bits/stdc++.h>
#define MAX 10010

using namespace std;

vector <int> grafo[MAX];
int visitados[MAX];
int n, v, a, x, y;

void cVector(){
	for(int i = 0; i < v; ++i){
		grafo[i].clear();
	}
}

int ciclo(int inicio){
	visitados[inicio] = 1;
	for(int i = 0; i < grafo[inicio].size(); ++i){
		int w = grafo[inicio][i];
		if(visitados[w] == 3) {
			continue;
		}
		if(visitados[w] == 1) {
			return 1;
		}
		if(ciclo(w) == 1) {
			return 1;
		}
	}
	visitados[inicio] = 3; 
	return 0;
}


int main(){
	

	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &v, &a);
		cVector();
		memset(visitados, 0, sizeof visitados);
		while(a--){
			scanf("%d %d", &x, &y);
			grafo[x].push_back(y);
		}

		int p = 0;

		for(int i = 0; i < v; ++i){

			if(!visitados[i] && ciclo(i)){
				p = 1;
			}
			
		}
		if(p) printf("SIM\n");
		else
			printf("NAO\n");


	}

	return 0;
}