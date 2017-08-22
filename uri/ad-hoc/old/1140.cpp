#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str, palavra;
	stringstream ss;
	int flag;

	while(getline(cin, str) && str[0] != '*'){
		ss.clear();
		ss.str("");
		flag = 0;
		ss << str;
		char c = '*';

		while(ss >> palavra){
			if(palavra[0] >= 'A' && palavra[0] <= 'Z'){
				palavra[0] = palavra[0] - 'A' + 'a';
			}
			if(c != '*'){
				if(palavra[0] != c){
					flag = 1;
					break;
				}
			}else {
				c = palavra[0];
			}
		}

		if(flag)
			printf("N\n");
		else
			printf("Y\n");

	}

	return 0;
}