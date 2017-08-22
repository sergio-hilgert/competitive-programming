#include <bits/stdc++.h>

using namespace std;

vector<int> graph[10010];
int visit[10010];
int ciclo;
int v, a;

void reset(){
	ciclo = 0;
	for(int i = 0; i <= v; ++i){
		visit[i] = 0;
		graph[i].clear();
	}
} 

int has_cycle(int inicio){
	visit[inicio] = 1;
	
	for(int i = 0; i < graph[inicio].size(); ++i){
		if(visit[graph[inicio][i]] == 2)
			continue;
		
		if(visit[graph[inicio][i]] == 1)
			return 1;
			
		if(has_cycle(graph[inicio][i]))
			return 1;
	}
	
	visit[inicio] = 2;
	return 0;
}

int main(){
	
	int x, y, n;
	
	scanf("%d", &n);
	
	while(n--){
		reset();
		scanf("%d %d", &v, &a);
		while(a--){
			scanf("%d %d", &x, &y);
			graph[--x].push_back(--y);
		}
		for(int i = 0; i < v; ++i){
			if(!visit[i] && graph[i].size() > 0){
				if(has_cycle(i))
					ciclo = 1;
			}
		}
		if(ciclo)
			printf("SIM\n");
		else
			printf("NAO\n");
		
	}
	
	return 0;
}