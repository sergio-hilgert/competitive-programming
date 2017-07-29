#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x, maximo_id;
	map<int, int> m;
	scanf("%d", &n);
	maximo_id = 0;
	while(n--){
		scanf(" %d", &x);
		++m[x];
		maximo_id = max(maximo_id, m[x]);
	}
	
	for(map<int,int> :: iterator it = m.end(); it != m.begin(); --it){
		
		if(it->second == maximo_id){
			printf("%d\n", it->first);
			break;
		}
	}
	
	return 0;
}