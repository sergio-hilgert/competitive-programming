#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;

int main(){
	
	int n, ano, t, min_ano;
	string str, min_str;
	while(scanf(" %d", &n) && n){
		min_ano = inf;
		while(n--){
			cin >> str;
			scanf(" %d %d", &ano, &t);
			if(min_ano > (ano-t)){
				min_str = str;
				min_ano = ano-t;
			}
		}
		cout << min_str << endl;
	}
	
	return 0;
}