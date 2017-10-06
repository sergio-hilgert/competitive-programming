#include <bits/stdc++.h>

using namespace std;

int main(){

  const int n = 0;
  int matriz[n][n] = {};

  for(int i = 0; i < n; ++i){
    for(int j = i, p = 0; j >= 0; --j, ++p){
      cout << matriz[p][j] << " ";
    }
    cout << endl;
  }
  for(int i = 1; i < n; ++i){
    for(int j = n-1, p = i; j >= i; --j, ++p){
      cout << matriz[p][j] << " ";
    }
    cout << endl;
  }

  return 0;
}