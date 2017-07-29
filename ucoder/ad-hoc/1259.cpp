#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	while(scanf("%d", &n) && n != -1){
		int result = 31%n;
		if(!result) result = 31;
		printf("%d\n", result);	
			
	}
	
	
	
	return 0;
}