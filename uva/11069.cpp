#include <bits/stdc++.h>

using namespace std;

const int maxn = 80;

int a[maxn];

void calc(){
	a[1] = 0;
	a[2] = 1;
	a[3] = 1;
	for(int i = 4; i < 79; ++i){
		a[i] = a[i-2]+a[i-3];
	}
}

int main(){
	
	calc();
	int n;
	while(scanf("%d", &n) != EOF){
		printf("%d\n", a[n] + a[n+1]);
	}
	
	return 0;
}