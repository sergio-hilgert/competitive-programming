#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, x, menor, soma;
	
	scanf("%d %d", &n, &m);
	menor = m;
	soma = m;
	while(n--){
		scanf("%d", &x);
		soma += x;
		menor = min (menor, soma);
	}
	
	printf("%d\n", menor);
	
	
	return 0;
}