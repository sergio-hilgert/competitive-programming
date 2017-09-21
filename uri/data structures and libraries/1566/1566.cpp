#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, m, x;
  vector<int> v;
  scanf(" %d", &n);
  while(n--){
    v.clear();
    scanf(" %d", &m);
    while(m--){
      scanf(" %d", &x);
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i){
      if(!i)
	printf("%d", v[i]);
      else
	printf(" %d", v[i]);
    }
    printf("\n");
  }
  


  return 0;
}
