#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  int n, m, cont;
  vector<int> v;
  bool swapped;
  while(scanf(" %d", &n) && n){
    v.clear();
    v.push_back(0);
    for(int i = 0; i < n; ++i){
      scanf(" %d", &m);
      v.push_back(m);
    }
    cont = 0;
    for(int i = 1; i < v.size();){
      if(v[i] == i)
	++i;
      else{
	cont += v[i]-i + v[i]-i+1;
	swap(v[i], v[v[i]]);
      }
    }
    cout << (cont&1?"Marcelo":"Carlos") << endl;
  }
  


  return 0;
}
