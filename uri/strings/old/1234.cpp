#include <bits/stdc++.h>

using namespace std;

string transforma(string str){
	int flag = 1;
	for(int i = 0; i < str.size(); ++i){
		if(flag){
			if(str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 'a' + 'A';
			if(str[i] != 32)
				flag = 0;	
		}else{
			if(str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] - 'A' + 'a';
			if(str[i] != 32)
				flag = 1;
		}
	}
	return str;
}

int main(){
	
	string str;

	while(getline(cin, str)){
		cout << transforma(str) << endl;
	}


	return 0;
}