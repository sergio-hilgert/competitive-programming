#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if(a == b || a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	
	return 0;
}