#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int result;
	scanf("%d", &n);
	
	if(n % 3 == 0)
		result = n /3;
	else
		result = n /3 + 1;
	
	if(result % 18 == 0){
		result /= 18;
		printf("%d %d\n", result, result * 80);
	}else{
		result = result/18 +1;
		printf("%d %d\n", result, result*80);
	}
	
	
	return 0;
}