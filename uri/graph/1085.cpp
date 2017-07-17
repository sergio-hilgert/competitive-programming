#include<bits/stdc++.h>

using namespace std;

const int maxn = 4010;
const int inf = 0x3f3f3f3f;

struct edge{
	int next;
	int weight;
	char letter;
	edge(int n, int w, char c): next(n), weight(w), letter(c) {}
	
	bool operator < (const edge &o) const{
		return weight > o.weight;
	}
};

map<string, int> m;
vector<edge> graph[maxn];
int dist[maxn][26];
int n, id, result;
string origem, destino, x, y, p;

void clear(){
	m.clear();
	for(int i = 0; i <= n*2; ++i){
		graph[i].clear();
		for(int j = 0; j < 26; ++j)
			dist[i][j] = inf;
	}
}

void dj(int inicio){
	priority_queue<edge> pq;
	// letra inicial, tem que ser uma letra invalida
	pq.push(edge(inicio, 0, '@'));
	
	for(int i = 0; i < 26; ++i)
		dist[inicio][i] = 0;
	int path;
	
	while(!pq.empty()){
		edge atual = pq.top(); pq.pop();
		
		// melhoria que nao precisou
		//if(dist[atual.next][atual.letter-'a'] > atual.weight)
		//	continue;
		
		for(int i = 0; i < graph[atual.next].size(); ++i){
			edge proxima = graph[atual.next][i];
			path = atual.weight + proxima.weight;
			// dj padrao, verificando se as letras sao diferentes
			if(atual.letter != proxima.letter && path < dist[proxima.next][proxima.letter - 'a']){
				dist[proxima.next][proxima.letter - 'a'] = path;
				pq.push(edge(proxima.next, path, proxima.letter));
			}
		}
	}
	
}

int main(){
	
	while(scanf("%d", &n) && n){
		clear();
		cin >> origem >> destino;
		id = 0;
		m[origem] = ++id;
		m[destino] = ++id;
		while(n--){
			cin >> x >> y >> p;
			if(!m[x])
				m[x] = ++id;
			if(!m[y])
				m[y] = ++id;
			graph[m[x]].push_back(edge(m[y], p.size(), p[0]));
			graph[m[y]].push_back(edge(m[x], p.size(), p[0]));
		}
		dj(m[origem]);
		
		result = inf;
		
		// pega o resultado minimo da distancia da origem
		// foi necessario criar uma matriz de distancia pois poderiam ter multiplas arestas ligadas de um mesmo ponto ao outro ponto, tendo assim letras diferentes
		for(int i = 0; i < 26; ++i)
			result = min(dist[m[destino]][i], result);
		
		if(result < inf)
			printf("%d\n", result);
		else
			printf("impossivel\n");
	}
	
	return 0;
}