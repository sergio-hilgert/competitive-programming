# include <bits/stdc++.h>
# define pii pair<int,int>

using namespace std;

int grafo[1030][1030];
int visitados[1030][1030];


void bfs(int i, int j){
	visitados[i][j] = 1;
	queue <pii> q;
	q.push(pii(i,j));
	int I; 
	int J;
	while(!q.empty()){
		I = q.front().first;
		J = q.front().second;
		if(!visitados[I+1][J] && grafo[I+1][J]){
			q.push(pii(I+1, J));
			visitados[I+1][J] = 1;
		}

		if(!visitados[I][J+1] && grafo[I][J+1]){
			q.push(pii(I, J+1));
			visitados[I][J+1] = 1;
		}

		if(!visitados[I-1][J] && grafo[I-1][J]){
			q.push(pii(I-1, J));
			visitados[I-1][J] = 1;
		}

		if(!visitados[I][J-1] && grafo[I][J-1]){
			q.push(pii(I, J-1));
			visitados[I][J-1] = 1;
		}
		q.pop();
	}
}

int main(){
	
	int m, n, cont = 0;
	char c;
	scanf("%d %d", &n, &m);
	memset(grafo, 0, sizeof grafo);
	memset(visitados, 0, sizeof visitados);

	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin>> c;
			if(c == '.')
				grafo[i][j] = 1;
		}
	}

	for(int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			if(!visitados[i][j] && grafo[i][j]){
				++cont;
				bfs(i,j);
			}
		}
	}
	
	cout << cont << endl;
	return 0;
}