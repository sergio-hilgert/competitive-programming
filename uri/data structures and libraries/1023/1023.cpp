#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, k = 0, x, y;
  double total, pt;
  map<int, int> m;
  bool espa, bespa = false;
  
  while(scanf(" %d", &n) && n){
    if(bespa)
      printf("\n");
    printf("Cidade# %d:\n", ++k);
    m.clear();
    total = 0;
    pt = 0;
    while(n--){
      scanf(" %d %d", &x, &y);
      m[y/x] += x;
      pt += x;
      total += y;
    }
    espa = true;
    for(map<int, int> :: iterator it = m.begin(); it != m.end(); ++it){
      if(espa)
	cout << it->second << "-" << it->first;
      else
	cout << " " << it->second << "-" << it->first;
      espa = false;
    }
    printf("\nConsumo medio: %.2lf m3.\n", (double)(((int)((total/pt)*100))/100.00));
    bespa = true;
  }


  return 0;
}
