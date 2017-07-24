#include <bits/stdc++.h>

using namespace std;

struct edge{
	int node;
	int weight;
	
	edge(int n, int w): node(n), weight(w) {}
	
	bool operator < (const edge &o) const{
		return weight > o.weight;
	}
};

const int maxn = 128;
const int inf = 0x3f3f3f3f;

vector<edge> graph[maxn];
int dist[maxn];
int n, m;


// resolver com floyd warshall
void dj(int inicio){
	dist[inicio] = 0;
	priority_queue<edge> pq;
	pq.push(edge(inicio, 0));
	int path;
	
	while(!pq.empty()){
		edge atual = pq.top(); pq.pop();

		for(int i = 0; i < graph[atual.node].size(); ++i){
			edge proxima = graph[atual.node][i];
			if(proxima.weight != inf){
				path = max(atual.weight, proxima.weight);
				if(path < dist[proxima.node]){
					dist[proxima.node] = path;
					pq.push(edge(proxima.node, path));
				}
			}
		}
	}
}

int main(){
	
	int x, y, p, instancia = 0, maximo;
	while(scanf(" %d %d", &n, &m) && (n || m)){
		printf("Instancia %d\n", ++instancia);
		for(int i = 0; i < n; ++i){
			graph[i].clear();
		}
		while(m--){
			scanf(" %d %d %d", &x, &y, &p);
			graph[x].push_back(edge(y, p));
			graph[y].push_back(edge(x, p));
		}
		scanf(" %d", &p);
		while(p--){
			scanf(" %d %d", &x, &y);
			for(int i = 0; i < n; ++i){
				dist[i] = inf;
			}
			dj(x);
			// maximo = 0;
			// while(dist[y].second != y){
			// 	//cout << y << " " << dist[y].second << endl;
			// 	for(int i = 0; i < n; ++i){
			// 		if(graph[y][i].node == dist[y].second){
			// 			maximo = max(maximo, graph[y][i].weight);
			// 			break;
			// 		}
			// 	}
			// 	y = dist[y].second;
			// }
			printf("%d\n", dist[y]);
		}
	}
	return 0;
}