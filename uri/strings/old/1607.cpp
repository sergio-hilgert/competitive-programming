#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, soma;
	string str1, str2;
	
	scanf("%d", &n);
	while(n--){
		soma = 0;
		cin >> str1 >> str2;
		for(int i = 0; i < str1.size(); ++i){
			if(str2[i] < str1[i])
				soma += 26 + str2[i] - str1[i];
			else
				soma += str2[i] - str1[i];
		}
		printf("%d\n", soma);
	}
	
	return 0;
}