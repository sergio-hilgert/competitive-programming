#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;
const int inf = INT_MAX - 100;

int graph[maxn][maxn];
int a, b, paths, count, sum_paths;

//if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];

int floyd(){
	for(int k = 0; k < count; ++k){
		for(int i = 0; i < count; ++i){
			for(int j = 0; j < count; ++j){
				graph[i][k] + graph[k][j] < 
			}
		}
	}
}

int main(){
	
	while(scanf(" %d %d", &a, &b) && (a ||b)){
		
		for(int i = 0 ; i < maxn; ++i){
			for(int j = 0; j < maxn; +j){
				if(i == j)
					graph[i][j] = 0;
				else
					graph[i][j] = inf;
			}
		}
		count = max(a,b);
		graph[a][b] = 1;
		while(scanf(" %d %d", &a, &b) && (a || b)){
			graph[a][b] = 1;
			count = max(a,b);
		}
		paths = (count-1) * count;
		for(int i = 0; i < )
		sum_paths = foyd();
	}
	
	
	return 0;
}