#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int cont;

int main(){
  string str;
  
  cin >> str;
  str += "z";
  double media = 0;;
  cont = 0;
  for(int i = 0; i < str.size()-1; ++i){
    if(str[i] == '0') continue;
    if (str[i] == '1' && str[i+1] == '0'){
      media += 10;
      ++cont;
    }else{
      media += str[i] - '0';
      ++cont;
    }
  }
  media /= cont;
  printf("%.2lf\n", media);


  return 0;
}
