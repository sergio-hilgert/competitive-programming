#include <bits/stdc++.h>

using namespace std;

const int maxn = 5010;
int arr[maxn];

int main(){
	
	int n, start, atual, ant, qnt;
	while(scanf(" %d", &n) && n){
		start = -1;
		qnt = 0;
		for(int i = 0; i < n; ++i){
			scanf(" %d", & arr[i]);
			if(arr[i]){
				start = i;
			}
		}
		if(start == -1){
			if(n & 1)
				printf("%d\n", n/2 + 1);
			else
				printf("%d\n", n/2);
			continue;
		}else{
			ant = start;
			atual = (start + 1)%n;
			while(atual != start){
				if(!arr[atual] && !arr[ant]){
					arr[atual] = 1;
					++qnt;
				}
				ant = atual;
				atual = (atual + 1) %n;
			}
		}
		printf("%d\n", qnt);
	}
	
	
	
	return 0;
}