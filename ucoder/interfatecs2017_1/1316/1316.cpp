#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;


string str;


void fix_str(){
  string new_str = "";
  for(int i = 0; i < str.size(); ++i){
    if(str[i] == '.' || str[i] == ' ' || str[i] == 'X')
      continue;
    new_str += str[i];
  }
  str = new_str;
}

void create_barcode(){
  string barcode = "";
  barcode += str.substr(0, 4);
  barcode += str.substr(32, 4);
  barcode += str.substr(36,10);
  barcode += str.substr(4, 5);
  barcode += str.substr(10, 10);
  barcode += str.substr(21, 10);

  str = barcode;
}

int digit(){
  fix_str();
  create_barcode();

  int soma = 0, peso = 2;
  for(int i = str.size()-1; i >= 0; --i){
    soma += peso * (str[i]-'0');
    ++peso;
    if(peso > 9)
      peso = 2;
  }
  soma = 11-(soma%11);
  if(soma > 9)
    return 1;
  return soma;  
}


int main(){
  
  getline(cin, str);
  printf("%d\n", digit());


  return 0;
}
