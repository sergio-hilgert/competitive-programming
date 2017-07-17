#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x[3];
	
	scanf("%d %d %d", &x[0], &x[1], &x[2]);
	
	sort(x, x+3, greater<int>());
	
	for(int i = 0; i < 3; ++i)
		printf("%d\n", x[i]);
	
	return 0;
}