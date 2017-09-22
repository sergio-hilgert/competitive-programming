#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, mx, v, total;
  string str;
  map<string, int> m;
  
  scanf(" %d %d", &n, &mx);

  while(n--){
    cin >> str >> v;
    m[str] = v;
  }
  while(mx--){
    total = 0;
    while(cin >> str){
      if(str == "."){
	break;
      }
      total += m[str];
    }
    printf("%d\n", total);
  }
  


  return 0;
}
