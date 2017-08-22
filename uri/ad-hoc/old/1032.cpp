#include <bits/stdc++.h>

using namespace std;

const int maxn = 35000;
const int maxprimes = 3600;

int primes[maxprimes];
int sieve[maxn];
int n;

int josephus(int m){
	if(m == 1)
		return 0;
	//cout << "m: "<<m<< endl;
	//cout << "primes["<<n<<"-"<<m<<"] = "<<primes[n-m] << endl;
	//cout << "primes["<<m<<"] = "<<primes[m] << endl;
	int x = (josephus(m-1) + primes[n-m]) % m;
	//cout << "return: " << x << endl;
	return x;
}

void sieve_calc(){
	int prime_index = 0;
	for(int i = 2; i < maxn; ++i){
		if(!sieve[i])
			primes[prime_index++] = i;
		
		
		for(int j = i*2; j < maxn; j += i){
			sieve[j] = 1;
		}
	}
}

int main(){
	
	memset(sieve, 0, sizeof sieve);
	sieve_calc();
	while(scanf("%d", &n) && n){
		printf("%d\n", josephus(n)+1);
	}
	
	return 0;
}