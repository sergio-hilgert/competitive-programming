#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	int n, cont, gcont;
	
	while(cin >> str){
		gcont = cont = 0;
		scanf("%d", &n);
		for(int i = 0; i < str.size(); ++i){
			while(i < str.size() && str[i] != 'W'){
				++cont;
				if(cont >= n){
					++gcont;
					cont = 0;
				}
				++i;
			}
			if (cont > 0){
				++gcont;
				cont = 0;	
			}
			if(i < str.size()){
				if(str[i] == 'W'){
					++gcont;
				}	
			}
		}
		printf("%d\n", gcont);
	}
	
	return 0;
}