#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  int result = 0;
  string str;
  cin >> str;
  for(int i = 0; i < str.size(); ++i){
    result += str[i] - '0';
  }
  if(result % 3 != 0)
    printf("impar\n");
  else
    printf("par\n");
  


  return 0;
}
