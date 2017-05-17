#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000005;

int main(){
	
	int n, m, topo;
	char numero[maxn];
	char pilha[maxn];
	
	while(scanf(" %d %d", &n, &m) && (n||m)){
		scanf("%s", numero);
		topo = -1;
		for(int i = 0; i < n; ++i){
			while(topo != -1 && m > 0 && pilha[topo] < numero[i]){
				--topo;
				--m;
			}
			pilha[++topo] = numero[i];
		}
		topo -= m;
		pilha[topo+1] = 0;
		printf("%s\n", pilha);
	}
	
	return 0;
}