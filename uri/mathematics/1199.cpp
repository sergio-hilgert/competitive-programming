#include <bits/stdc++.h>

using namespace std;

int64_t ipow(int64_t base, int exp){
	int64_t result = 1;
	while(exp){
		if(exp & 1){
			result *= base;	
		}
		exp >>= 1;
		base *= base;
	}
	return result;

}


long long int hexToDec(string x){
	reverse(x.begin(), x.end());
	long long int result = 0;
	for(int i = 0; i < x.size(); ++i){
		if(x[i] >= 'a' && x[i]<= 'z'){
			result += (10 + x[i] - 'a') * ipow(16, i);
		}else{
			result += (x[i] - '0') * ipow(16, i); 
		}
	}
	return result;
}


int main(){

	string in;

	while(cin >> in && in.compare("-1")){
		if(in[1] == 'x'){
			printf("%lld\n", hexToDec(in.substr(2, in.size()-2)));		
		}else
			printf("0x%X\n", atoi(in.c_str()));
	}

	return 0;
}