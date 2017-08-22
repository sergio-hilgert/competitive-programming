#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x, p;
	long maximo;
	int h[250];

	scanf("%d", &n);

	while(n--){
		memset(h, 0 , sizeof h);

		scanf("%ld", &maximo);
		for(int i = 0; i < maximo; ++i){
			scanf("%d", &x);
			++h[x];
		}
		p = 1;

		for(int i = 20; i <= 230; ++i){
			for(int j = 0; j < h[i]; ++j){
				if(p == maximo){
					printf("%d\n", i);
				}else
					printf("%d ", i);
				++p;
			}
		}

	}

	return 0;
}