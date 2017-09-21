#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  int n, m, x, k = 0;
  vector<int> v;

  while(scanf(" %d %d", &n, &m) && (m || n)){
    v.clear();
    printf("CASE# %d:\n", ++k);
    while(n--){
      scanf(" %d", &x);
      v.push_back(x);
    }
    sort(v.begin(), v.end());

    int low, high, mid;
    bool ok;
    while(m--){
      scanf(" %d", &x);
      low = 0;
      high = v.size()-1;
      ok = false;
      while(low <= high){
	mid = low + (high-low)/2;
	if(v[mid] == x){
	  while(v[--mid] == x);
	  printf("%d found at %d\n", x, mid+2);
	  ok = true;
	  break;
	}else if(v[mid] < x){
	  low = mid + 1;
	}else{
	  high = mid - 1;
	}
	
      }
      if(!ok){
	printf("%d not found\n", x);
      }
    }
  }
  return 0;
}
