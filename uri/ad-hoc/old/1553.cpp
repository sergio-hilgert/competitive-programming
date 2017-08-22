#include <bits/stdc++.h>

using namespace std;
const int maxn = 1010;
const int inf = 0x3f3f3f3f;

int main(){
	int perg[maxn];
	int n, m, x, cont;
	
	while(scanf(" %d %d", &n, &m) && (n ||m)){
		memset(perg, 0, sizeof perg);
		cont = 0;
		while(n--){
			scanf(" %d", &x);
			perg[x]++;
			if(perg[x] >= m){
				++cont;
				perg[x] = inf * -1;
			}
		}	
		printf("%d\n", cont);
	}
	
	return 0;
}