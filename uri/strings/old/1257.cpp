#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	int n, m, soma;
	
	scanf("%d", &n);
	
	while(n--){
		soma = 0;
		scanf("%d", &m);
		for(int i = 0; i < m; ++i){
			cin >> str;
			for(int j = 0; j < str.size(); ++j){
				soma += str[j] - 'A' + j + i;
			}
		}
		printf("%d\n", soma);
	}
	
	return 0;
}