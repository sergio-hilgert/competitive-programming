#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long a, b, c;
	
	while(scanf(" %ld %ld %ld", &a, &b, &c) && (a || b || c)){
		printf("%ld\n", (long) cbrt(a*b*c));
	}
	
	return 0;
}