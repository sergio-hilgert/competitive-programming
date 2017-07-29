#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, k = 0, printed;
	
	while(scanf(" %d %d", &n, &m) && (n || m)){
		printed = 0;
		for(int i = 0; i <= 26; ++i){
			if(m + m*i >= n){
				printf("Case %d: %d\n", ++k, i);
				printed = 1;
				break;
			}
		}
		if(!printed)
			printf("Case %d: impossible\n", ++k);
	}
	
	return 0;
}