#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int soma = 0;
	char ok[6], notas[6];
	
	for(int i = 0; i < 5; ++i)
		scanf(" %c", &ok[i]);
		
	for(int i = 0; i < 5; ++i)
		scanf(" %c", &notas[i]);
		
	for(int i = 0; i < 5; ++i){
		//cout << ok[i] << " " << notas[i] << endl;
		if(ok[i] == notas[i])
			soma += 2;
	}
	
	printf("%d\n", soma);
	
	return 0;
}