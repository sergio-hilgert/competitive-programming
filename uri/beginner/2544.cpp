#include<bits/stdc++.h>

using namespace std;

int despoten(int n){
	if(!n) return -1;
	return despoten(n/2) + 1;
}

int main(){
	
	int n;
	
	while(scanf("%d", &n) != EOF){
		printf("%d\n", despoten(n));
	}
	
	return 0;
}