#include <bits/stdc++.h>

using namespace std;

string linha;

int getNumero(){

	int pos;
	pos = linha.find(' ',0);
	string numero = linha.substr(0,pos);
	linha = linha.substr(pos + 1);
	return atoi(numero.c_str());
}

int main(){

	map<string, int> m;
	m["suco de laranja"] = 120;
	m["morango fresco"] = 85;
	m["mamao"] = 85;
	m["goiaba vermelha"] = 70;
	m["manga"] = 56;
	m["laranja"] = 50;
	m["brocolis"] = 34;
	
	int n, t;
	string fruta;
	int soma;

	while(scanf("%d", &n) && n){
		soma = 0;
		getchar();
		while(n--){
			getline(cin, linha);
			t = getNumero();
			fruta = linha;
			soma += m[fruta] * t;			
		}
		if(soma >= 110 && soma <= 130){
			printf("%d mg\n", soma);
		}else if (soma < 110){
			printf("Mais %d mg\n", 110 - soma);
		}else{
			printf("Menos %d mg\n", soma - 110);
		}
	}	
	

	return 0;
}