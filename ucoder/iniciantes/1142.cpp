#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b ,&c);
	
	printf("%d\n", max(a, max(b,c)));
	
	return 0;
}