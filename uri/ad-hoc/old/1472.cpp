#include<bits/stdc++.h>

using namespace std;

const int maxn = 100010;

int main(){
	
	int n, soma, qnt, tam;
	int somas[maxn];
	
	while(scanf(" %d", &n) != EOF){
		soma = 0;
		for(int i = 0 ;i < n; ++i){
			scanf(" %d", &somas[i]);
			soma += somas[i];
			somas[i] = soma;
		}
		
		qnt = 0;
		if(soma % 3 != 0){
			printf("0\n");
			continue;
		}
		tam = soma / 3;
		
		for(int i = 0; i < n; ++i)
			if(binary_search(somas, somas + n, somas[i] + tam) && binary_search(somas, somas + n, somas[i] + 2*tam))
				qnt ++;
		printf("%d\n", qnt);
			
	}
	
	return 0;
}