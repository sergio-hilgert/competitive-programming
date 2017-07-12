#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cont;
	string str;
	long long int soma;
	
	scanf("%d", &n);
	
	while(n--){
		soma = cont = 0;
		cin >> str;
		for(int i = 0; i < str.size(); ++i){
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
			if(str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'E' || str[i] == 'S')
				++cont;
		}
		soma = pow(3, cont) * pow (2, str.size() - cont);
		
		printf("%lld\n", soma);
	}
	
	return 0;
}