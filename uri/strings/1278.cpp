#include <bits/stdc++.h>

using namespace std;

string arruma(string &str){
	string resp = "";
	stringstream ss;
	ss.clear();
	ss.str("");
	ss << str;
	string palavra;
	int k = 0;
	while(ss >> palavra){
		if(k)
			resp += ' ';
		resp += palavra;
		k = 1;
	}
	
	return resp;
}

int main(){
	
	int n, maximo, k = 0;
	string str;
	string s_str[110];
	
	while(scanf(" %d", &n) && n){
		if(k)
			printf("\n");
		getchar();
		maximo = 0;
		for(int i = 0; i < n; ++i){
			getline(cin, str);
			s_str[i] = arruma(str);
			maximo = max((int)s_str[i].size(), maximo);
		}
		for(int i = 0; i < n; ++i){
			for(int j = (int) s_str[i].size(); j < maximo; ++j)
				printf(" ");
			cout << s_str[i] << endl;
		}
		k = 1;
	}
	
	return 0;
}