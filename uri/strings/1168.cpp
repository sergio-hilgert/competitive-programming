#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int numeros[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	string linha;
	int n;
	long long result;
	scanf("%d", &n);
	
	while(n--){
		result = 0;
		cin >> linha;
		for(int i = 0; i < linha.size(); ++i){
			result += numeros[ (linha[i] - '0') ];
		}
		cout << result <<" leds"<< endl;
	}

	return 0;
}