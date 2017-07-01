#include <bits/stdc++.h>

using namespace std;

const int maxn = 200000;

	int n;
	set<int> s;

vector <int> graph[maxn];
int visitados[maxn];
int vidas[maxn];
int contador;

void bfs(int inicio){
	
	visitados[inicio] = 1;
	queue<int> q;
	q.push(inicio);
	int atual = inicio;
	while(!q.empty()){
		//cout << endl;
		//cout << "VIDAS DEPOIS: " << vidas << endl;
		atual = q.front(); q.pop(); 
		for(int i = 0; i < graph[atual].size(); ++i){
			if(!visitados[graph[atual][i]] && vidas[atual]){
				q.push(graph[atual][i]);
				vidas[graph[atual][i]] = vidas[atual] - 1;
				visitados[graph[atual][i]] = 1;
				//cout << graph[atual][i] << " ";
				++contador;
				//cout << "contador: "<<contador << endl;
			}
		}
		
	}
}

void limpa(){
	for(int i = 0; i < maxn; ++i){
		graph[i].clear();
	}
	s.clear();
}

int main(){
	int x, y;
	int k = 1;
	
	while(scanf("%d", &n) && n){
		limpa();
		
		while(n--){
			scanf("%d %d", &x, &y);
			s.insert(x); s.insert(y);
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		
		while(scanf("%d %d", &x, &y) && (x || y)){
			//cout << x << ' ' << y << endl;
			contador = 1;
			memset(visitados, 0, sizeof visitados);
			vidas[x] = y;
			bfs(x);
			//Case 1: 5 nodes not reachable from node 35 with TTL = 2.
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", k++, (int)(s.size() - contador), x, y);
			//cout << endl;
			//cout << s.size() - contador << endl;
		}
	}
	
	
	return 0;
}