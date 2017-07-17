#include <bits/stdc++.h>

using namespace std;

const int maxn = 32;
const int inf = 0x3f3f3f3f;

int chegada[maxn];
int largada[maxn];
int n, c, k, aux;

int findPos(int k){
	for(int i = 0; i < n; ++i){
		if(chegada[i] == largada[k])
			return i;
	}
}

int main(){
	
	while(scanf(" %d", &n) != EOF){
		for(int i = 0; i < n; ++i)
			scanf(" %d", &largada[i]);
		
		for(int i = 0; i < n; ++i)
			scanf(" %d", &chegada[i]);
		
		k = c = 0;
		
		while(k < n){
			while(chegada[k] != largada[k]){
				aux = findPos(k);
				swap(chegada[aux-1],chegada[aux]);
				++c;
			}
			++k;
		}
		
		printf("%d\n", c);
			
	}
	
	return 0;
}