#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tcases, k = 0, n, c, p;

	queue<int> q[110];
	
	scanf("%d", &tcases);
	
	while(tcases--){
		if(k)
			printf("\n");
		scanf(" %d %d", &n, &c);
		
		for(int i = 0; i <= n; ++i)
			while(!q[i].empty()) q[i].pop();
		
		while(c--){
			scanf( "%d", &p);
			q[p%n].push(p);
		}
		for(int i = 0; i < n; ++i){
			printf("%d -> ", i);
			while(!q[i].empty()){
				printf("%d -> ", q[i].front());
				q[i].pop();
			}
			printf("\\\n");
			
		}
		k = 1;
	}
	
	return 0;
}