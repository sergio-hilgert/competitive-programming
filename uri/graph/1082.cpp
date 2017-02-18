# include <bits/stdc++.h>

using namespace std;

int n, v, a, cor;
int grafo[30][30], visitados[30];
char x, y;


void dfs(int inicio){
	visitados[inicio] = cor;
	for(int i = 0; i < v; ++i){
		if(grafo[inicio][i] && !visitados[i]){
			
			dfs(i);
		}
	}


}

int main(){

	scanf("%d", &n);

	for(int i = 1; i <= n; ++i){
		printf("Case #%d:\n", i );

		memset(grafo, 0, sizeof grafo);
		memset(visitados, 0, sizeof visitados);
		cor = 1;
		scanf("%d %d", &v, &a);
		while(a--){
			cin >> x >> y;
			grafo[x - 'a'][y - 'a'] = 1;
			grafo[y - 'a'][x - 'a'] = 1;
		}
		for(int j = 1; j <= cor; ++j){
			for(int i = 0; i < v; ++i){
				if(!visitados[i]){
					dfs(i);
					++cor;
				}
				if(visitados[i] == j)
					cout<< (char)('a' + i)<< ',';
			}
			if(j != cor) cout<< endl;

		}
		printf("%d connected components\n\n", cor-1 );

	}


	return 0;
}