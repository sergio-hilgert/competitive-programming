#include <bits/stdc++.h>

using namespace std;
long contador;

long fib(int x){
	++contador;
	if (x <= 0)
		return 0;
	if (x == 1)
		return 1;
	return fib(x-1) + fib(x-2);
}


int main(){
	
	int n, x;

	while(scanf("%d", &n) != EOF){
		while(n--){
			contador = -1;
			scanf("%d", &x);
			long y = fib(x);
			printf("fib(%d) = %ld calls = %ld\n", x, contador, y);	
		}
	}

	return 0;
}