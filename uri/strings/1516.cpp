#include <bits/stdc++.h>

using namespace std;

const int maxn = 64;

char matrix[maxn][maxn];

int main(){
	int n, m, a, b;
	string str;
	while(scanf(" %d %d", &n, &m) && (m || n)){
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				scanf(" %c", &matrix[i][j]);		
			}
		}
		scanf(" %d %d", &a, &b);
		
		a = a / n;
		b = b / m;
		
		for(int i = 0; i < n; ++i){
			str = "";
			for(int j = 0; j < m; ++j){
				for(int k = 0; k < b; ++k)
					str += matrix[i][j];
			}
			str += "\n";
			for(int p = 0; p < a; ++p)
				cout << str;
		}
		
		printf("\n");
	}
	
	return 0;
}