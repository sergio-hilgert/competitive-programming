#include <bits/stdc++.h>

using namespace std;

void printaResult(){
	
}


int main(){
	
	int n, x;
	long long unsigned soma;
	string line;
	
	while(scanf(" %d", &n) && n){
		soma = 0;
		while(n--){
			scanf(" %d", &x);
			getchar();
			getline(cin, line);
			
			if(line == "suco de laranja"){
				soma += 120 * x;
				continue;	
			}
			if(line == "morango fresco"){
				soma += 85 * x;
				continue;	
			}
			if(line == "mamao"){
				soma += 85 * x;
				continue;	
			}
			if(line == "goiaba vermelha"){
				soma += 70 * x;
				continue;	
			}
			if(line == "manga"){
				soma += 56 * x;
				continue;	
			}
			if(line == "laranja"){
				soma += 50 * x;
				continue;	
			}
			if(line == "brocolis"){
				soma += 34 * x;
				continue;	
			}
		}
		
		if(soma >= 110 && soma <= 130){
			printf("%llu mg\n", soma);
			continue;
		}
		if(soma < 110){
			printf("Mais %llu mg\n", 110 - soma);
			continue;
		}
		
		if(soma > 130){
			printf("Menos %llu mg\n", soma - 130);
			continue;
		}
	}
	
	return 0;
}