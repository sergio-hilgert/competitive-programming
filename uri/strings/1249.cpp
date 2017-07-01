#include <bits/stdc++.h>

using namespace std;

string str1 = "abcdefghijklmnopqrstuvwxyz";
string str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string str3 = "!@#$\%^&*()-_=+[]{}|;':,./<>?\"";

int main(){
	string str;
	while(getline(cin, str)){
		for(int i = 0; i < str.size(); ++i){
			if(str[i] == ' ') continue;
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str1[(str1.find(str[i]) + 13) % str1.size() ];
			else if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str2[(str2.find(str[i]) + 13) % str2.size() ];
		}
		cout << str << endl;
	}
	
	return 0;
}