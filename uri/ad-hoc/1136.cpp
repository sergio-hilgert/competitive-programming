#include<bits/stdc++.h>

using namespace std;

const int maxn = 126;

int resp[maxn];
int balls[maxn];

int main(){
	
	int n, m, ok;
	
	while(scanf(" %d %d", &n, &m) && (n || m)){
		memset(resp, 0, sizeof resp);
		ok = 1;
		for(int i = 0; i < m; ++i)
			scanf(" %d", &balls[i]);
	
		for(int i = 0; i < m; ++ i)
			for(int j = 0; j < m; ++j)
				resp[abs(balls[i]-balls[j])] = 1;
		
		for(int i = 0; i <= n; ++i){
			if(!resp[i]){
				ok = 0;
				break;
			}
		}
		if(ok)
			printf("Y\n");
		else
			printf("N\n");
			
	}
	
	return 0;
}