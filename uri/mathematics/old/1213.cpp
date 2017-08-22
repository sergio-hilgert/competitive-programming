#include <bits/stdc++.h>

//(a + b) % m = ((a % m) + (b % m)) % m
//(a x b) % m = ((a % m) * (b % m)) % m
//(a - b) % m = ((a % m) - (b % m)) % m

using namespace std;

int64_t ipow(int64_t base, int exp){
	int64_t result = 1;
	while(exp){
		if(exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return result;
}

int main(){
	long int n, contador;
	long int x;

	while(scanf("%ld", &n) != EOF){
		x = 11;
		contador = 2;
		while(x % n != 0){
			x = 10*x + 1;
			++contador;
		}
		cout << contador << endl;
	}

	return 0;
}