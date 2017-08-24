#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 10010;

typedef long long huge;

int apostas[maxn];
vector<pair<int, int> > v;
int main(){

  int n, x, begin;
  
  while(scanf(" %d", &n) && n){
    for(int i = 0; i < n; ++i)
      scanf(" %d", &apostas[i]);
    int p = 0, s = 0;
    for(int i = 0; i < n; ++i){
      s = max(apostas[i], s + apostas[i]);
      p = max(p, s);
    }
    if(p)
      printf("The maximum winning streak is %d.\n", p);
    else
      printf("Losing streak.\n");
  }


  return 0;
}
