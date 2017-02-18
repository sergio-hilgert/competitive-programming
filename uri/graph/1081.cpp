# include <bits/stdc++.h>

using namespace std;
int grafo[30][30];
int visitados[30];
int v, a, x, y;
string b;

void printaResult(int k, int v, int i){
	if(k)
		cout<< b << v << "-" << i << endl;
	else{
		cout<< b << v << "-" << i << " pathR(G," << i << ")" << endl; 
		
	}
}

void dfs(int inicio){
	visitados[inicio] = 1;
	for(int i = 0; i < v; ++i){
		if(grafo[inicio][i]){
			if(visitados[i]){
				b += "  ";
				printaResult(1, inicio, i);
				
			}
			else{
				b += "  ";
				printaResult(0, inicio, i);
				dfs(i);
			}
			
			b = b.substr(0, b.size()- 2);
		}	
		
		
	}

}

int main(){

	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; ++i){
		printf("Caso %d:", i);
		b = "";
		memset(grafo, 0 , sizeof grafo);
		memset(visitados, 0 , sizeof visitados);
		scanf("%d %d", &v, &a);
		while(a--){
			scanf("%d %d", &x, &y);
			grafo[x][y] = 1;
		}

		for(int i = 0; i < v; ++i){
			for(int j = 0; j < v; ++ j){
				if(grafo[i][j] && !visitados[i]){
					printf("\n");
					dfs(i);
				}
			}
		}

		printf("\n");
		
	}
	

	return 0;
}