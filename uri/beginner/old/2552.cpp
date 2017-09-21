#include <bits/stdc++.h>

using namespace std;

int matrix[120][120];
int n, m, x;

void arruma(){
	int contador;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if(matrix[i][j] == 9) continue;
			contador = 0;
			if(matrix[i+1][j] == 9)
				++contador;
			if(matrix[i][j+1] == 9)
				++contador;
			if(matrix[i][j-1] == 9)
				++contador;
			if(matrix[i-1][j] == 9)
				++contador;
			matrix[i][j] = contador;
		}
	}
}

void printa(){
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}


int main(){
	
	
	while(scanf("%d %d", &n, &m) != EOF){
		memset(matrix, 0, sizeof matrix);
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j){
				scanf("%d", &x);
				if(x)
					matrix[i][j] = 9;
				else
					matrix[i][j] = 0;
			}
		}
		arruma();
		printa();
	}
	return 0;
}