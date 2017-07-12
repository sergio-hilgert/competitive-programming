#include <bits/stdc++.h>

using namespace std;

const int maxn = 1024;
const int maxl = 32;

char word[maxn];
int graph[maxn][maxl];
int connections[maxn];
char print_word[maxn];
int indice;

void dfs(int i){
	for(int j = 0; j <= 26; ++j){
		if(graph[i][j]){
			print_word[indice++] = 'a' + j;
			print_word[indice] = '\0';
			printf("%s\n", print_word);
			dfs(graph[i][j]);
			--indice;
		}
	}
}

int main(){
	
	while(scanf("%s", word+1) != EOF){
		// nó que vai ser conecatdo a todos os outros, pode ser qualquer valor
		word[0] = 'x';
		
		memset(connections, 0, sizeof connections);
		
		//criado o grafo
		for(int i = strlen(word); i >= 0; --i){
			for(int j = 0; j <= 26; ++j)
				graph[i][j] = connections[j];
			
			// conectado as letras		
			connections[word[i] - 'a'] = i;
		}
		
		indice = 0;
		dfs(0);
		printf("\n");
	}
	
	return 0;
}