#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x;
	
	vector<int> v;
	
	while(scanf("%d %d", &n, &m) != EOF){
		v.clear();
		while(n--){
			scanf(" %d", &x);
			v.push_back(x);
		}
		sort(v.begin(), v.end(), greater<int>());
		
		while(m--){
			scanf(" %d", &x);
			printf("%d\n", v[--x]);
		}
				
	}
	
	
	return 0;
}