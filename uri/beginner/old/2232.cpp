#include <bits/stdc++.h>

using namespace std;

long long ipow(int base, int ex){
	long long result = 1;

	while(ex){
		if(ex & 1)
			result *= base;
		ex >>= 1;
		base *= base;
	}

	return result;
}

int main(){
	
	int n, x;
	unsigned long long resp;

	scanf("%d", &n);
	while(n--){
		resp = 0;
		scanf("%d", &x);
		for(int i = 0; i < x; ++i)
			resp += ipow(2, i);
		printf("%llu\n", resp );
	}
	
	return 0;
}