#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	scanf("%d\n", &n);
	
	if((n % 100 == 0 && n % 400 == 0) || (n % 100 != 0 && n % 4 == 0)){
		printf("S\n");
	}else{
		printf("N\n");
	}
	
	return 0;
}