# include <bits/stdc++.h>

using namespace std;
int v, a;
vector <int> grafo[2000];
int visitados[2000];

void vclear(){
	for(int i = 0; i < 2000; ++i){
		grafo[i].clear();
	}
}

void bfs(int inicio){
	queue <int> q;
	visitados[inicio] = 1;
	
}

int main(){

	int x, y, p;

	while(scanf("%d %d", &v, &a) && (v || a)){
		vclear();
		memset(visitados, 0 , sizeof visitados);

		while(a--){
			scanf("%d %d %d", &x, &y, &p);
			if((p-1)){
				grafo[x].push_back(y);
				grafo[y].push_back(x);
			}else
				grafo[x].push_back(y);
		}

	}


	return 0;
}