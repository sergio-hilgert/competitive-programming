#include <bits/stdc++.h>

using namespace std;

const int sieve_maxn = 1500;

bool sieve[sieve_maxn];
vector<int> primes;

void create_sieve(){
	int p = 0;
	for(int i = 2; i < sieve_maxn; ++i){
		if(!sieve[i]){
			primes.push_back(i);
			//cout << primes[p++] << endl;
			for(int j = i+i; j < sieve_maxn; j += i){
				sieve[j] = true;
			}
		}
	}
}

bool is_prime(int &n){
	if(n < sieve_maxn)
		return !sieve[n];
	
	for(int i = 0; primes[i]*primes[i] <= n; ++i)
		if(n % primes[i] == 0) return false;
	
	return true;
}

/*
hyperprimos: crivo, achar o primeiro primo que divide e dividir por ele, se sobrar algo entao nao e primo. se nao sobrar nada entao é preciso ver se a potencia mais um é um primo.
*/

int main(){
	
	int n, cont, expo, aux, i = 2;
	create_sieve();
	
	while(scanf(" %d", &n) != EOF){
		cont = 0;
		i = 2;
		while(i <= n){ // esse while ta fudendo
			if(is_prime(i)){
				++cont;
				++i;
				continue;
			}
			for(int j = 0; j < primes.size(); ++j){
				if(i % primes[j] == 0){
					expo = 0;
					aux = i;
					while(aux > 1){
						++expo;
						aux /= primes[j];
						if(aux != 1 && aux % primes[j] != 0){
							aux = -1;
							break;
						}
						
					}
					if(aux != -1 && !sieve[expo+1]){
						++cont;
					}
					break;
				}
			}
			++i;
		}
		printf("%d\n", cont);
	}
	
	return 0;
}