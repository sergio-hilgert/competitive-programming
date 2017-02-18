#include <bits/stdc++.h>

using namespace std;

string troca(string str, int tam){
	string palavra = "";
	int charint;
	char c;
	for(int i = 0; i < str.size(); ++i){
		charint = ((str[i]- 65 + 26 - tam ) % 26) + 65;
		c = charint;
		palavra += c;
	}
	return palavra;
}

int main(){
	
	int n, x;
	string str;

	while(scanf("%d", &n) != EOF){
		while(n--){
			cin >> str;
			scanf("%d", &x);
			cout << troca(str, x) << endl;
		}

	}

	return 0;
}