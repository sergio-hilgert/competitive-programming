#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, maximo, esp, k = 0;
	string str[60];
	
	while(scanf("%d", &n) && n){
		if(k)
			cout << endl;
		maximo = 0;
		for(int i = 0; i < n; ++i){
			cin >> str[i];
			maximo = max((int)str[i].size(), maximo);
		}
		for(int i = 0; i < n; ++i){
			esp = maximo - str[i].size();
			for(int j = 0; j < esp; ++j)
				printf(" ");
			cout << str[i] << endl;
		}
		k = 1;
	}
	
	return 0;
}