#include <bits/stdc++.h>

using namespace std;

const long mod = 10e9 + 7;

int main(){
  string str;
  long result;
  bool k = false;
  while(cin >> str){
    if(k)
      printf("\n");
    result = 0;
    for(int i = 0; i < str.size(); ++i){
      if(str[i] == '0') continue;
      if(!result || str[i] == '1' || result == 1){
        result += str[i]-'0';
      }else{
        result *= str[i]-'0';
      }
      result = result%mod;
    }
    cout << result;
    k = true;
  }

  return 0;
}