#include <bits/stdc++.h>

using namespace std;

int main(){

	long long unsigned a;
	long long unsigned b;
	long long unsigned soma = 0;

	while(scanf("%llu %llu", &a, &b) != EOF){
		soma = ((a+b)*(b-a+1))/2;

		printf("%llu\n", soma);
	}


	return 0;
}