#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if(a > b)
		printf("%d\n", (a-b)*4);
	else
		printf("0\n");
	return 0;
}