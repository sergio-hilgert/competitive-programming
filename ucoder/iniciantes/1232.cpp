#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char c;
	
	scanf(" %c", &c);
	if(c == 'M')
		printf("Bom Dia!\n");
	else if(c == 'V')
		printf("Boa Tarde!\n");
	else if(c == 'N')
		printf("Boa Noite!\n");
	else
		printf("Valor Invalido!\n");
	
	return 0;
}