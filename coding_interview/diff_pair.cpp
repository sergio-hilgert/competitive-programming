#include <Bits/stdc++.h>

using namespace std;

int main(){

  int v[5] = {90, 70, 20, 30, 50};
  int k = 0;
  bool ok = false;

  sort(v, v+5); // O(n long n)
  int i, j;
  
  if(k < 0){
    i = 1;
    j = 0;
  }else{
    i = 0;
    j = 1;
  }

  
  // O(n)
  while(i < 5 && j < 5){
    if(i != j && v[j]-v[i] == k){
      ok = true;
      break;    
    }
    if(v[j]-v[i] < k)
      ++j;
    else
      ++i;
  }

  // O(n log n)
  if(ok)
    cout << "yes" << endl;
  else 
    cout << "no" << endl;

  return 0;
}