#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, vol, result;
	
	scanf("%d %d", &vol, &n);
	result = vol;
	while(n--){
		scanf(" %d", &vol);
		result = result + vol;
		if(result < 0)
			result = 0;
		else if(result > 100)
			result = 100;
		
	}
	
	printf("%d\n", result);
	return 0;
}

