#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, q, x, a, b;
  unordered_map<int, vector<int> > m;
  
  while(scanf(" %d %d", &n, &q) != EOF){
    m.clear();
    for(int i = 1; i <= n; ++i){
      scanf(" %d", &x);
      m[x].push_back(i);
    }
    while(q--){
      scanf(" %d %d", &a, &b);
      if(m.count(b) && m[b].size() >= a){
	printf("%d\n", m[b][--a]);
      }else{
	printf("0\n");
      }
    }
  }


  return 0;
}
