#include<bits/stdc++.h>

using namespace std;

/*
  2
  10
  4
  100
  9
  8 4 2 1
  1 0 0 1
  99
  64 32 16 8 4 2 1
  1   1  0 0 0 1 1 
*/

int main(){

  string input = "128";
  bitset<input.size() * 4> b;

  int result = 0;
  for(int i = 0; i < input.size(); ++i){
    result = result*10 + (input[i] - '0');
    cout << result << endl;
  }
  cout << endl;
  cout << result << endl;
  return 0;
}