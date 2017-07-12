#include <bits/stdc++.h>
using namespace std;

const int maxn = 10010;
const int inf = 0x3f3f3f3f;

struct edge{
	// next node connected
	int next;
	long long weight;
	
	// constructor
	edge(int t, long long w) : next(t), weight(w) {}
	
	// operator for the priority_queue
	bool operator < (const edge &o) const {
		return weight > o.weight;
	}
};

vector< edge > graph[maxn];
vector< edge > even_graph[maxn];
long long int dist[maxn];
int visit[maxn];
int v, a;

//dfs
void make_even(int inicio){
	if(visit[inicio]) return;
	visit[inicio] = 1;
	for(int i = 0; i < graph[inicio].size(); ++i){
		edge atual = graph[inicio][i];
		for(int j = 0; j < graph[atual.next].size(); ++j){
			edge proxima = graph[atual.next][j];
			if(inicio != proxima.next)
				even_graph[inicio].push_back(edge(proxima.next, atual.weight + proxima.weight));
			make_even(proxima.next);
		}
	}
}

// dijkstra
void dj(int inicio, int fim){
	priority_queue <edge> pq;
	int path;
	pq.push(edge(inicio,0));
	dist[inicio] = 0;
	
	while(!pq.empty()){
		edge atual = pq.top(); pq.pop();
		if(dist[atual.next] > atual.weight)
			continue;
		
		for(int i = 0; i < even_graph[atual.next].size(); ++i){
			edge proxima = even_graph[atual.next][i];
			path = atual.weight + proxima.weight;
			if(path < dist[proxima.next]){
				dist[proxima.next] = path;
				pq.push(edge(proxima.next, path));
			}
				
		}
	}
}

int main(){
	int x, y, p;
	scanf(" %d %d", &v, &a);
	while(a--){
		scanf(" %d %d %d", &x, &y, &p);
		--x; --y;
		graph[x].push_back(edge(y, p));
		graph[y].push_back(edge(x, p));
	}
	
	// clear dist and visit
	for(int i = 0; i < v; ++i){
		visit[i] = 0;
		dist[i] = inf;
	}
	// dfs to make the graph even
	make_even(0);
	
	//dj ikstra
	dj(0, v-1);
	
	if(dist[v-1] < inf)
		printf("%lld\n", dist[v-1]);
	else
		printf("-1\n");
	
	return 0;
}