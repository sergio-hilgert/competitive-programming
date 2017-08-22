#include <bits/stdc++.h>

using  namespace std;

int main(){

	long int a, b, c, m;

	while(scanf("%ld %ld", &a, &b) && (a || b)){
		c = - a - b + 3*a;
		printf("%ld\n", c);
	}

	return 0;
}