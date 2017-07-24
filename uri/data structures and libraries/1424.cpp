#include <bits/stdc++.h>

using namespace std;

int main(){
	map<int, vector<int > > mv;
	int n, m, x, y;
	
	while(scanf(" %d %d", &n, &m) == 2){
		mv.clear();
		for(int i = 1; i <= n; ++i){
			scanf(" %d", &x);
			mv[x].push_back(i);
		}
		while(m--){
			scanf(" %d %d", &x, &y);
			if(mv[y].size() < x)
				printf("0\n");
			else
				printf("%d\n", mv[y][--x]);
		}
	}
	
	
	return 0;
}