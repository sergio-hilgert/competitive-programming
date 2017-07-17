#include <bits/stdc++.h>

using namespace std;

long long fatorial(long long x){
	if(x == 1)
		return 1;
	return fatorial(x-1) * x;
}

int main(){
	long long p;
	scanf("%lld", &p);
	printf("%lld\n", fatorial(p));
	
	return 0;
}