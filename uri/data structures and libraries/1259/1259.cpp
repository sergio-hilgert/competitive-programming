#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

bool cmp (const int &a, const int &b){
  if(a & 1 && b & 1)
    return a > b;
  if(!(a&1) && !(b&1))
    return a < b;
  if(a & 1 && !(b &1)){
    return false;
  }
  
  return true;
}

int main(){

  vector<int> v;

  int n, x;

  scanf(" %d", &n);
  while(n--){
    scanf(" %d", &x);
    v.push_back(x);
  }
  sort(v.begin(), v.end(), cmp);

  for(int i = 0; i < v.size(); ++i){
    printf("%d\n", v[i]);
  }

  return 0;
}
