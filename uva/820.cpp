#include <bits/stdc++.h>

using namespace std;

const int maxn = 128;

int graph[maxn][maxn];
int visited[maxn];
long fluxo;


int path(int fonte, int ralo){
	queue<int> q;
	q.push(fonte);
	memset(visited, 0, sizeof visited);
	visited[fonte] = 1;
	while(!q.empty()){
		int node = q.front();
		for(int j = 0; j < n; ++j){
			if(graph[][] && !visited[j]){
				
			}
		}
	}
}

void max_fluxo(int fonte, int ralo){
	fluxo = 0;
	
	while(path(fonte, ralo)){
		// 
		// 
		// 
	}
	
	
}

int main(){
	
	int n, fonte, ralo, arestas, x, y, p, t = 0;

	while(scanf("%d", &n) && n){
		
		memset(graph, 0, sizeof graph);
		scanf(" %d %d %d", &fonte, &ralo, &arestas);
		while(arestas--){
			scanf(" %d %d %d", &x, &y, &p);
			graph[x][y] = p;
			graph[y][x] = p;
		}
		max_fluxo();
		printf("Network %d\n", ++t);
		printf("The bandwidth is %d.\n\n", fluxo);
	}
	
	return 0;
}