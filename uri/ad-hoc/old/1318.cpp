#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, x, qnt;
	map<int, int> my;

	while(scanf("%d %d", &n, &m) && (n || m)){
		my.clear();
		qnt = 0;
		while(m--){
			scanf("%d", &x);
			if(my.find(x) != my.end()){
				if(my[x] == 1){
					++qnt;
					my[x] = 2;
				}
				
			}
			else
				my[x] = 1;
		}
		printf("%d\n", qnt);
	}

	return 0;
}
