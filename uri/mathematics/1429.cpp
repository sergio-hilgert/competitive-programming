#include <bits/stdc++.h>

using namespace std;

int fat[6];

int fatorial(int x){
	if(fat[x]) return fat[x];
	if(x <= 1) return fat[x] = 1;
	return fat[x] = x * fatorial(x-1);	
}

int acmToDec(int n, int qnt){
	if(!n)
		return 0;
	return n%10 * fatorial(qnt) + acmToDec(n/10, qnt + 1 );
}

int main(){
	
	int n;

	memset(fat, 0 ,sizeof fat);

	while(scanf("%d", &n) && n){
		printf("%d\n", acmToDec(n, 1));		
	}

	return 0;
}