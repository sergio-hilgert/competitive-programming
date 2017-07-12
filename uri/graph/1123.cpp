#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;
const int inf = 0x3f3f3f3f;
const huge huge_inf = 0x3fff3fff3fff3fff;
const double eps = 1e-9;
const int maxn = 256;

int graph[maxn][maxn];
int dist[maxn], visit[maxn];
int v, a, c;

void clean_graph(){
	for(int i = 0; i < v; ++i){
		for(int j = 0; j < v; ++j){
			graph[i][j] = inf;
		}
		visit[i] = 0;
		dist[i] = inf;
	}
}

void dj(int start, int end){
	dist[start] = 0;
	int short_dist, short_dist_index, path;
	
	for(int i = 0; i < v; ++i){
		if(visit[end]) return;
		short_dist = inf;
		for(int j = 0; j < v; ++j){
			if(!visit[j] && short_dist > dist[j]){
				short_dist = dist[j];
				short_dist_index = j;
			}
		}
		
		if(short_dist == inf) return;
		visit[short_dist_index] = 1;
		
		for(int j = 0; j < v; ++j){
			path = graph[short_dist_index][j] + short_dist;
			if(graph[short_dist_index][j] != inf && path < dist[j])
				dist[j] = path;
				
			//cout << j << ": " << dist[j] << endl;
		}
	}
}

int main(){
	int k, x, y, p;
	
	while(scanf(" %d %d %d %d", &v, &a, &c, &k) &&(v || a || c || k)){
		--c;
		clean_graph();
		while(a--){
			scanf(" %d %d %d", &x, &y, &p);
			if(x > c && y > c){
				graph[x][y] = p;
				graph[y][x] = p;
			}else if (x > c && y <= c){
				graph[x][y] = p;
			}else if(x <= c && y <= c && abs(x-y) == 1){
				if(x > y)
					swap(x, y);
				graph[x][y] = p;
			}
		}
		dj(k, c);
		cout << dist[c] << endl;
	}
		
	
	return 0;
}