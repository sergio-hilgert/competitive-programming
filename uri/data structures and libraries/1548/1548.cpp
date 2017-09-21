#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int cont;

bool cmp (const int &a, const int &b){
  if(a > b){
    return true;
  }
  return false;
}

int main(){

  int n, m, x;
  vector<int> v;
  
  scanf(" %d", &n);

  while(n--){
    cont = 0;
    v.clear();
    scanf(" %d", &m);
    while(m--){
      scanf(" %d", &x);
      v.push_back(x);
    }
    vector<int> copy(v);
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); ++i){
      if(v[i] == copy[i])
	++cont;
    }
    printf("%d\n",cont);
  }
  


  return 0;
}
