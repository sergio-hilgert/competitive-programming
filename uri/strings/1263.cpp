#include <bits/stdc++.h>

using namespace std;

int calc(string &str){
	string word;
	stringstream ss;
	ss.str("");
	ss.clear();
	ss << str;
	ss >> word;
	int cont = 1, gcont = 0;
	char c = word[0];
	while(ss >> word){
		if(word[0] == c){
			++cont;
		}else{
			cont = 1;
			c = word[0];
		}
		if(cont == 2) ++gcont;
	}
	return gcont;
	
}

void to_low(string &str){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
	}
}

int main(){
	
	string str;
	
	while(getline(cin, str)){
		to_low(str);
		cout << calc(str) << endl;
		
	}
	
	return 0;
}