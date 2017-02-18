#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x;
	int multiplos[10];

	scanf("%d", &n);
	memset(multiplos, 0, sizeof multiplos);

	for(int i = 0; i < n; ++i){
		scanf("%d", &x);
		if(x % 2 == 0)
			multiplos[2]++;
		if(x % 3 == 0)
			multiplos[3]++;
		if(x % 4 == 0)
			multiplos[4]++;
		if(x % 5 == 0)
			multiplos[5]++;
	}
	for(int i = 2; i <= 5; ++i){
		printf("%d Multiplo(s) de %d\n", multiplos[i], i);
	}


	return 0;
}