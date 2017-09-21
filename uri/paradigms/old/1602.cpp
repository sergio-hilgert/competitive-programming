#include <bits/stdc++.h>

using namespace std;

const int maxn = 2000010;

bool sieve[maxn];
vector<int>primes;
int hyperprimes[maxn] = {0};

void create_sieve(){
  int p = 0;
  for(int i = 2; i < maxn; ++i){
    if(!sieve[i]){
      primes.push_back(i);
      hyperprimes[i] = hyperprimes[i-1] + 1;
      for(int j = i+i; j < maxn; j += i){
	sieve[j] = true;
      }
    }else{
      int aux, expo;
      for(int j = 0; primes[j]*primes[j] <= i; ++j){
	if(i % primes[j] == 0){
	  aux = i;
	  while(aux % primes[j] == 0 && aux > 1){
	    aux /= primes[j];
	    expo++;
	  }
	  if(!sieve[expo] && aux == 1){
	    hyperprimes[i] = hyperprimes[i-1]+1;
	  }
	}
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
    printf("%d\n", hyperprimes[n]);
  }
	
  return 0;
}
