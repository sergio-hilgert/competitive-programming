#include <bits/stdc++.h>

using namespace std;

int calc(string &str){
	stringstream ss;
	ss.clear();
	ss.str("");
	ss << str;
	string palavra;
	int ok, cont = 0;
	long int soma = 0;
	while(ss >> palavra){
		if(palavra[palavra.size()-1] == '.')
			palavra.erase(palavra.size()-1, 1);
		ok = 1;
		for(int i = 0; i < palavra.size(); ++i){
			if(ok && (palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z'))
				continue;
			else
				ok = 0;
		}
		if(ok){
			soma += palavra.size();
			++cont;
		}
	}
	
	
	return cont ? soma/cont : 0;
}

int main(){
	
	string str;
	int resp;
	while(getline(cin, str)){
		resp = calc(str);
		if(resp <= 3)
			printf("250\n");
		else if(resp <= 5)
			printf("500\n");
		else
			printf("1000\n");
	}
	
	return 0;
}