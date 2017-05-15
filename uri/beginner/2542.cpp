#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<long int> > v1;
	vector<vector<long int> > v2;
	vector<long int> v;
	
	int n, m, l, c1, c2, a;
	long int x;
	while(scanf(" %d", &n) != EOF){
		v1.clear();
		v2.clear();
		scanf(" %d %d", &m, &l);
		while(m--){
			v.clear();
			for(int i = 0; i < n; ++i){
				scanf(" %ld", &x);
				v.push_back(x);
			}
			v1.push_back(v);
		}
		
		while(l--){
			v.clear();
			for(int i = 0; i < n; ++i){
				scanf(" %ld", &x);
				v.push_back(x);
			}
			v2.push_back(v);
		}
		
		scanf(" %d %d", &c1, &c2);
		scanf(" %d", &a);
		--c1; --c2; --a;
		if(v1[c1][a] > v2[c2][a]){
			printf("Marcos\n");
		} else if(v1[c1][a] < v2[c2][a]){
			printf("Leonardo\n");
		}else
			printf("Empate\n");
	}
	
	return 0;
}