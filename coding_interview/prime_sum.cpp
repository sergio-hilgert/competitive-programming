#include <bits/stdc++.h>

using namespace std;


// 10

/*
  2 2 3 3   5 5  7   7
  2 4 7 10 15 20 27 34

  2 3 5 7
  

*/

bool is_prime(int n){
  if(n <= 1) return false;
  if(n <= 3) return true;

  if(n % 2 == 0 || n % 3 == 0){
    return false;
  }
  for(int i = 5; i*i <= n; i += 6){
    if(n % i == 0 || n % (i+2) == 0)
      return false;
  }

  return true;
}

int main(){

  int input = 16777214;
  //int input = 4;

  for(int i = 2; i < input/2; ++i){
    if(is_prime(i) && is_prime(input -i)){
      printf("%d %d", i, input-i);
      break;
    }
  }
    
  return 0;
  
}