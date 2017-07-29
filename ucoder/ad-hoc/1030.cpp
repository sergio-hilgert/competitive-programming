#include <bits/stdc++.h>

using namespace std;

const int maxn = 100010;

int main(){
	
	int n, m, arr[maxn], x, expandiu;
	vector<int> pos, aux;
	scanf("%d %d", &n, &m);
	memset(arr, 0, sizeof arr);
	while(m--){
		scanf(" %d", &x);
		--x;
		arr[x] = 1;
		pos.push_back(x);
	}
	int tam, qnt = 0;
	
	while(1){
		expandiu = 0;
		tam = pos.size();
		for(int i = 0; i < tam; ++i){
			if(pos[i] -1 >= 0 && !arr[pos[i]-1]){
				arr[pos[i]-1] = 1;
				expandiu = 1;
				aux.push_back(pos[i]-1);
			}
			if(pos[i]+1 < n && !arr[pos[i]+1]){
				arr[pos[i]+1] = 1;
				expandiu = 1;
				aux.push_back(pos[i]+1);
			}
		}
		if(!expandiu)
			break;
		pos.clear();
		pos = aux;
		aux.clear();
		++qnt;
	}
	printf("%d\n", qnt);
	
	
	return 0;
}