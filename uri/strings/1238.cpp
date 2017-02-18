#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;

	string str, str2;

	scanf("%d", &n);

	while(n--){
		cin >> str >> str2;
		int maior = max(str.size(), str2.size());
		for(int i = 0; i < maior; ++i){
			if(maior == str2.size() && i >= str.size()){
				cout << str2[i];
			}else if(maior == str.size() && i >= str2.size()){
				cout << str[i];
			}else{
				cout << str[i] << str2[i];
			}
		}
		cout << endl;
	}

	return 0;
}