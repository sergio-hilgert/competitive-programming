	#include <bits/stdc++.h>

	using namespace std;

	unsigned long long bits[10100];

	int result(int op, int x, int y){
		if(op == 1){
			printf("%d\n", __builtin_popcountll((bits[x] & bits[y])));
		}else{
			printf("%d\n", __builtin_popcountll((bits[x] | bits[y])));
		}
	}

	int main(){
		
		int n, m, x, y, z;

		scanf(" %d", &n);

		while(n--){
			memset (bits, 0, sizeof bits);
			scanf(" %d", &m);

			for(int i = 0; i < m; ++i){
				scanf(" %d", &x);
				while(x--){
					scanf(" %d", &y);
					bits[i] |= 1LL << --y;			
				}
			}
			scanf(" %d", &m);

			while(m--){
				scanf("%d %d %d", &z, &x, &y);
				result(z, --x, --y);
			}

		}
		return 0;
	}