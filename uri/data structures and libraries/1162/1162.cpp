#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, m, x, j, cont;
  vector<int> v;

  scanf(" %d", &n);
  while(n--){
    v.clear();
    cont = 0;
    scanf(" %d", &m);
    while(m--){
      scanf(" %d", &x);
      v.push_back(x);
    }
    bool swipped = true;
    int last_sorted = v.size();
    while(swipped){
      swipped = false;
      for(int i = 0; i < last_sorted - 1; ++i){
	if(v[i] > v[i+1]){
	  swap(v[i], v[i+1]);
	  swipped = true;
	  ++cont;
	}
      }
      --last_sorted;
    }
    printf("Optimal train swapping takes %d swaps.\n", cont);
  }
  


  return 0;
}
