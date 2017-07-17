#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, anterior, atual, resp;
	
	while(scanf(" %d %d", &n, &m) && (n || m)){
		anterior = n;
		resp = 0;
		while(m--){
			scanf(" %d", &atual);
			if(atual < anterior)
				resp += anterior - atual;
			anterior = atual;
		}
		printf("%d\n", resp);
	}
	
	return 0;
}