#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

typedef long long huge;

int main(){

  vector<int> v[maxn];
  int n, x, y, w;
  bool k = false;
  scanf(" %d", &n);

  while(n--){
    if(k)
      printf("\n");
    scanf(" %d %d", &x, &y);
    for(int i = 0; i < x; ++i)
      v[i].clear();
    while(y--){
      scanf(" %d", &w);
      v[w%x].push_back(w);
    }
    for(int i = 0; i < x; ++i){
      printf("%d ->", i);
      if(!v[i].size())
	printf(" \\\n");
      else{
	for(int j = 0; j < v[i].size(); ++j){
	  printf(" %d ->", v[i][j]);
	}
	printf(" \\\n");
      }
    }
    k = true;
  }
  return 0;
}
