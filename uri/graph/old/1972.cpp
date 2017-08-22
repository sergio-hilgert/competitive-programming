#include<bits/stdc++.h>

using namespace std;

const int maxn = 512;
const int inf = 0x3f3f3f3f;

int graph[maxn][maxn], visit[maxn][maxn];
int dist[maxn][maxn];
int m, n;
pair<int, int> inicio, fim;

struct edge{
	int weight;
	int i;
	int j;
	
	edge(int w, int ii, int jj): weight(w), i(ii), j(jj) {}
	
	bool operator < (const edge &o) const{
		return weight > o.weight;
	}
};

void dj(){
	int ii[4] = {-1, 0, 1, 0};
	int jj[4] = {0, 1, 0, -1};
	priority_queue<edge> pq;
	dist[inicio.first][inicio.second] = 0;
	pq.push(edge(0, inicio.first, inicio.second));
	int menor_dist, path, aux;
	
	while(!pq.empty()){
		edge atual = pq.top(); pq.pop();
		
		for(int i = 0; i < 4; ++i){
			// adjacent weight is not infinite
			//graph[atual.i + ii[i]][atual.j + jj[i]] = adjacent weight
			if(graph[atual.i + ii[i]][atual.j + jj[i]] != inf){
				path = atual.weight + graph[atual.i + ii[i]][atual.j + jj[i]]; 
				
				if(path < dist[atual.i + ii[i]][atual.j + jj[i]]){
					dist[atual.i + ii[i]][atual.j + jj[i]] = path;
					pq.push(edge(path, atual.i + ii[i], atual.j + jj[i]));
				}
			}
		}
	}
}

void clear(){
	for(int i = 1; i <= n + 2; ++i){
		for(int j = 1; j <= m + 2; ++j){
			dist[i][j] = inf;
			visit[i][j] = 0;
			graph[i][j] = inf;
		}
	}
}

int main(){
	char c;
	scanf("%d %d", &n, &m);
	clear();
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			scanf(" %c", &c);
			if(c == '.')
				graph[i][j] = 0;
			else if(c == 'H'){
				graph[i][j] = 0;
				inicio = make_pair(i,j);
			}else if(c == 'E'){
				graph[i][j] = 0;
				fim = make_pair(i,j);
			}else if(c >= '0' && c <= '9')
				graph[i][j] = c - '0';
		}
	}
	
	dj();
	
	if(dist[fim.first][fim.second] < inf){
		printf("%d\n", dist[fim.first][fim.second]);
	}else{
		printf("ARTSKJID\n");	
	}
		
	
	return 0;
}