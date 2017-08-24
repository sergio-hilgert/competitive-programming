#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  unordered_set<string> s;
  string str;
  int n;

  while(scanf(" %d", &n) && n){
    s.clear();
    while(n--){
      cin >> str;
      sort(str.begin(), str.end());
      s.insert(str);
    }
    printf("%d\n", (int)s.size()); 
  }


  return 0;
}
