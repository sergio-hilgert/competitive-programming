#include<bits/stdc++.h>

using namespace std;

int n, turn;
pair<int,int> position;

void reCalc(){
	int *i = &position.first;
	int *j = &position.second;

	if(turn == 0){
		++*j; // primeiro movimento de cada camada
		turn = 1;
		return;
	}
	
	if(turn == 1 && *i + *j >= n && *j > n/2){
		--*i; // cima
		return;
	}else{
		turn = 2;
	}
	
	if(turn == 2 && *i < *j && *i < n/2){
		--*j; // esquerda
		return;
	}else{
		turn = 3;
	}
	
	if(turn == 3 && *i + *j < n -1 && *j < n/2){
		++*i; // baixo
		return;
	}else{
		turn = 4;
	}
	
	if(turn == 4 && *i > *j && *i > n/2){
		++*j; // direita
		return;
	}else{
		turn = 0;
		reCalc();
	}
}

int main(){
	
	while(scanf("%d", &n) && n){
		position = make_pair(n/2, n/2);
		turn = 0;
		for(int p = 0; p < n*n; ++p){
			
			for(int i = 0; i < n; ++i){
				for(int j = 0; j < n; ++j){
					if(position.first == i && position.second == j){
						printf("X");
					}else
						printf("O");
				}
				printf("\n");
			}
			reCalc();
			printf("@\n");
		}
	}
	
	return 0;
}