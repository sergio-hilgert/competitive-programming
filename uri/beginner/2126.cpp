#include<bits/stdc++.h>

using namespace std;

string str1, str2;
int qnt, pos;

void arruma(){
	int atual = -1, contador;
	for(int i = 0; i < str2.size(); ++i){
		if(str2[i] == str1[0]){
			contador = 1;
			for(int j = 1; j < str1.size() && (i + j) < str2.size(); ++j){
				if(str1[j] == str2[i+j])
					++contador;
			}
			if(contador == str1.size()){
				qnt++;
				atual = i;
			}
		}
	}
	pos = atual;
}

void printa(int i){
	printf("Caso #%d:\n", i);
	if(qnt != 0)
		printf("Qtd.Subsequencias: %d\nPos: %d\n\n", qnt, ++pos);
	else
		printf("Nao existe subsequencia\n\n");
}

int main(){
	int cont = 0;
	
	while(cin >> str1){
		qnt = 0;
		cin >> str2;
		arruma();
		printa(++cont);
	}
	
	return 0;
}