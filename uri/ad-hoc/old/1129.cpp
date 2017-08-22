#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, numero, resp, cont;

	while(scanf("%d", &n) && n){
		while(n--){
			cont = 0;
			for(int i = 0; i < 5; ++i){
				scanf("%d", &numero);
				if(numero <= 127){
					resp = i;
					++cont;
				}
			}
			if(cont == 1)
				printf("%c\n", 'A' + resp);
			else
				printf("*\n");

		}
	}

	return 0;
}