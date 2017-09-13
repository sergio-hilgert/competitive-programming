#include <bits/stdc++.h>

using namespace std;

char enc[8][128], c;
int I = 0, J = 0;

int main(){
	string line;
	long long int a, b, atual;
	int result;
	string stra, strb, stratual;
	while(getline(cin, line)){
		J = line.size();
		for(int j = 0; j < J; ++j){
			enc[I][j] = line[j];
		}
		++I;
	}
	stra = strb = "";
	for(int i = 0; i < 4; ++i){
		stra += enc[i][0];
		strb += enc[i][J-1];
	}
	a = atoll(stra.c_str());
	b = atoll(strb.c_str());
	
	stratual = "";
	for(int j = 1; j < J-1; ++j){
		for(int i = 0; i < 4; ++i){
			stratual += enc[i][j];
		}
		atual = atoll(stratual.c_str());
		stratual = "";
		result = (a * atual + b)%257;
		c = (char)atual;
		printf("%c", result);
	}
	printf("\n");
	return 0;
}