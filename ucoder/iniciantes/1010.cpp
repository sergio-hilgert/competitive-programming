#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, dinheiro, total, k,x, y, troco;
	scanf("%d", &n);
	
	while(n--){
		scanf( "%d", &k);
		total = 0;
		while(k--){
			scanf(" %d %d", &x, &y);
			total += x*y;
		}
		scanf(" %d", &dinheiro);
		troco = dinheiro - total;
		if(troco >= 0)		
			printf("%d\n", troco);
		else
			printf("DINHEIRO INSUFICIENTE\n");
	}
	return 0;
}