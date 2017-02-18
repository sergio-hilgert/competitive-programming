# include <bits/stdc++.h>

using namespace std;
long unsigned n, soma;
//20 por 39

long unsigned matriz[30][50];

void pupula(){

	for(int i = 2; i <= n; ++i){
		for(int j = n-i+1; j <= n+i-1; ++j){
			matriz[i][j] = matriz[i-1][j-1] + matriz[i-1][j] + matriz[i-1][j+1];
		}
	}

}

int main(){
		
		scanf("%lu", &n);
		soma = 0;
		memset(matriz, 0 , sizeof matriz);
		matriz[1][++n] = 1;
		if(n < 2){
			printf("%lu\n", matriz[1][1]);
		}else{
			pupula();
			
			for(int i = 1; i <= n+n-1; ++i){
				soma += matriz[n][i];
			}

			printf("%lu\n", soma);
		}
	
	return 0;
}