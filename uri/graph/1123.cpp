#include <bits/stdc++.h>
#define MAX 100000;
#define INF INT_MAX;

using namespace std;

int grafo[MAX][MAX], visi[MAX], dist[MAX];
int v, a, c, k;

void limpaGrafo(){
	for(int i = 0; i < v; ++i){
		for(int j = 0; j < v; ++j){
			grafo[i][j] = INF;
		}
	}
}


int main(){
	
	int x, y, p;

	while(scanf("%d %d %d %d", &v, &a, &c, &k) && (v || a || c || k)){
		while(a--){

			scanf("%d %d %d", &x, &y, &p);
			if((x >= c && y >= c) || (x < c && y < c && abs(x-y) == 1)){
				grafo[x][y] = p;
				grafo[y][x] = p;
			} else if(x >= c && y < c){
				grafo[x][y] = p;
			}else if(x < c && y >= c){
				grafo[y][x] = p;
			}
		}
			

	}	
	

	return 0;
}