#include <bits/stdc++.h>

using namespace std;

const int maxn = 100010;

int numeros[maxn];

int main(){
	
	int n, x, i;
	int moves;
	while(scanf(" %d", &n) && n){
		moves = 0;
		for(i = 1; i <= n; ++i){
			scanf(" %d", &numeros[i]);
		}
		
		for(i = 1; i <= n; ++i){
			if(numeros[i] != i){
				// calculo para saber a quantidade de movimentos necessarios para mover da posicao j para a i
				moves += 2 * (numeros[i]-i) - 1;
				swap(numeros[i], numeros[numeros[i]]);
				--i;
			}
		}
		if(moves & 1)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
		
	}
	
	return 0;
}