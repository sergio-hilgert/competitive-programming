#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int result, temp;
	long long int x;
	int n;
	
	while(scanf(" %d", &n) && n){
		temp = 0;
		result = 0;
		while(n--){
			scanf(" %lld", &x);
			temp += x;
			result += llabs(temp);
		}
		printf("%lld\n", result);
	}	
	return 0;
}