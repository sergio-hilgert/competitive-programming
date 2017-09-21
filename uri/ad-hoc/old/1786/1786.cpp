#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  string str;
  int d1, d2, c1, c2;
  
  while(cin >> str){
    d1 = 0;
    d2 = 0;
    c1 = 1;
    c2 = 9;
    for(int i = 0; i < str.size(); ++i){
      d1 += (str[i] - '0')*c1++;
      d2 += (str[i] - '0')*c2--;
      if(i != 0 && i % 3 == 0)
	cout << '.';
      cout << str[i];
      
    }
    cout << '-' << (d1%11 == 10? 0: d1%11) << (d2%11 == 10? 0: d2%11) << endl;
  }


  return 0;
}
