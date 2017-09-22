#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;
const double eps = 1e-9;

typedef long long huge;

int main(){

  unordered_map<char, double> m;
  m['W'] = 1;
  m['H'] = 1/2.0;
  m['Q'] = 1/4.0;
  m['E'] = 1/8.0;
  m['S'] = 1/16.0;
  m['T'] = 1/32.0;
  m['X'] = 1/64.0;
  
  string str;
  int cont;
  double total;
  while(cin >> str){
    cont = 0;
    total = 0;
    if(str == "*")
      break;
    
    for(int i = 1; i < str.size(); ++i){
      if(str[i] == '/'){
	if(abs(total - 1) < eps){
	  cont++;
	}
	total = 0;
      }else{
	total += m[str[i]];
      }
    }
    printf("%d\n", cont);
    
  }
  

  return 0;
}
