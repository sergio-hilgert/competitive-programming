#include <bits/stdc++.h>

using namespace std;

int gcd(long int a, long int b){
	return b != 0? gcd(b, a%b): a; 
}

string love(long x , long y){
	if(gcd(x, y) == 1)
		return "Love is not all you need!";
	return "All you need is love!";
}


int main(){
	
	unsigned int n, number1, number2;
	string bin1, bin2;
	
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		cin >> bin1 >> bin2;
		number1 = bitset<32>(bin1).to_ulong(); 
		number2 = bitset<32>(bin2).to_ulong(); 
		printf("Pair #%d: ", i); 
		cout << love(number1, number2) << endl;
	}

	return 0;
}