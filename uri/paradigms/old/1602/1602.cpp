#include <bits/stdc++.h>

using namespace std;

const int maxn = 2000001;

bool sieve[maxn];
vector<int>primes;
int hyperprimes[maxn] = {0};

void create_sieve(){
  for(int i = 2; i < maxn; ++i){
    if(!sieve[i]){
      primes.push_back(i);
      for(int j = i+i; j < maxn; j += i){
	sieve[j] = true;
      }
    }
  }
}

bool div_qnt(int n){
  int expo;
  for(int i = 0; primes[i]*primes[i] <=n; ++i){
    if(n % primes[i] == 0){
      expo = 0;
      while(n > 1 && n % primes[i] == 0){
	++expo;
	n /= primes[i];
      }
      if(n == 1 && !sieve[expo+1])
	return true;
      return false;
    }
  }
  return false;
}

/*
  hyperprimos: crivo, achar o primeiro primo que divide e dividir por ele, se sobrar algo entao nao e primo. se nao sobrar nada entao é preciso ver se a potencia mais um é um primo.
*/

int main(){
	
  int n;
  create_sieve();
  for(int i = 2; i < maxn; ++i){
    if(!sieve[i] || div_qnt(i)){
      ++hyperprimes[i];
    }
    hyperprimes[i] += hyperprimes[i-1];
  }
  while(scanf(" %d", &n) != EOF){
    //for(int i = 0; i <= n; ++i)
    // cout << "hy: " << i << " "  << hyperprimes[i] << endl;
    printf("%d\n", hyperprimes[n]);
  }
	
  return 0;
}
