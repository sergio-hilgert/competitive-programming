#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, x;
	int cont, total;
	total = 0;
	scanf(" %d %d", &n, &m);
	for(int i = 0; i < n; ++i){
		cont = 0;
		for(int j = 0; j < m; ++j){
			scanf(" %d", &x);
			if(x)
				++cont;
		}
		if(cont == m)
			++total;
	}
	
	printf("%d\n", total);
	
	return 0;
}