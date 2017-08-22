#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	unsigned long long int x;
	int pos;
	
	scanf(" %d", &n);
	
	while(n--){
		scanf("%llu", &x);
		x *= 2;
		pos = (-1 + sqrt(1+x*4))/2;
		printf("%d\n", pos);
	}
	
	
	return 0;
}