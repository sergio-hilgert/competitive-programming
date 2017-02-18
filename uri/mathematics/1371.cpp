#include <bits/stdc++.h>

using namespace std;

long long int x;	

void calculaElevado(long long i){
	for(long long j = 1; j <= i; ++j){
		if(j == i)
			printf("%lld\n", j*j);
		else
			printf("%lld ", j*j);
	}
}

int main(){
	
	while(scanf("%lld", &x) && x){
		calculaElevado((long long)sqrt(x));
	}
	return 0;
}