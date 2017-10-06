#include <bits/stdc++.h>

using namespace std;

bool is_ok(int input){
  //cout << input << endl;
  long p;
  for(int i = 2; i*i <= input; ++i){
    //cout << i << endl;
    p = i;
    while(p < input){
      p *= i;
    }
    if(p == input)
      return true;
  }
  return false;
}

int main(){

  int input = 1024000000;
    //int input = 48;
  cout << is_ok(input) << endl;


  return 0;
}