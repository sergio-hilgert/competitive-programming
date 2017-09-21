#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  map<string, double> m;
  string str;
  int n, mm;
  double value, total;

  scanf(" %d", &n);
  while(n--){
    m.clear();
    total = 0;
    scanf(" %d", &mm);
    while(mm--){
      cin >> str >> value;
      m[str] = value;
    }
    scanf(" %d", &mm);
    while(mm--){
      cin >> str >> value;
      total += m[str] * value;
    }
    printf("R$ %.2lf\n", total);
  }
  


  return 0;
}
