#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char c;
	string palavra = "";
	string rpalavra;

	while(scanf("%c", &c) == 1){
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			palavra += c;
	}

	rpalavra = palavra;
	reverse(palavra.begin(), palavra.end());

	if(palavra == rpalavra){
		printf("S\n");
	}else
		printf("N\n");


	return 0;
}