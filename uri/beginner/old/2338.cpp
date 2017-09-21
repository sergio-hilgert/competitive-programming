#include <bits/stdc++.h>

using namespace std;
const char blanco = '#';

inline char whatIs(string str){
	if(str == "=")
		return '1';
	else if (str == "===")
		return '0';
	else
		return blanco;
}

int main(){
	
	map<string, string> m;
	string str;
	int n;

	m["10"] = "a";
	m["0111"] = "b";
	m["0101"] = "c";
	m["011"] = "d";
	m["1"] = "e";
	m["1101"] = "f";
	m["001"] = "g";
	m["1111"] = "h";
	m["11"] = "i";
	m["1000"] = "j";
	m["010"] = "k";
	m["1011"] = "l";
	m["00"] = "m";
	m["01"] = "n";
	m["000"] = "o";
	m["1001"] = "p";
	m["0010"] = "q";
	m["101"] = "r";
	m["111"] = "s";
	m["0"] = "t";
	m["110"] = "u";
	m["1110"] = "v";
	m["100"] = "w";
	m["0110"] = "x";
	m["0100"] = "y";
	m["0011"] = "z";
	m["00000"] = "0";
	m["10000"] = "1";
	m["11000"] = "2";
	m["11100"] = "3";
	m["11110"] = "4";
	m["11111"] = "5";
	m["01111"] = "6";
	m["00111"] = "7";
	m["00011"] = "8";
	m["00001"] = "9";

	scanf("%d", &n);
	string key, temp, resp;
	int contador;
	char resultC;
	getchar();

	while(n--){
		getline(cin, str);
		resp = "";
		contador = 0;
		key = "";
		temp = "";
		for(int i = 0; i < str.size(); ++i){
			if(contador == 5){
				resp += ' ';
			}

			if(contador == 3){
				resp += m[key];
				key = "";
			}

			if(str[i] != '.'){
				temp += str[i];
				contador = 0;
				if(i == str.size() - 1){
					key += whatIs(temp);
					resp += m[key];
				}
			}else{
				resultC = whatIs(temp);
				if(resultC != '#'){
					key += resultC;
				}
				temp = "";
				contador++;
			}
		}
		cout << resp << endl;
	}

	

	return 0;
}