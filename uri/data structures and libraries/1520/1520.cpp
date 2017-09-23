#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

vector<int> v;

int binary_search(int &x){
  int low = 0, high = v.size()-1, mid;

  while(low <= high){
    mid = low + (high-low)/2;
    if(v[mid] == x){
      return mid;
    }else if(v[mid] < x){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return -1;
}

int main(){

  int n, x, y, index, bottom, top;
  while(scanf(" %d", &n) != EOF){
    v.clear();
    while(n--){
      scanf(" %d %d", &x, &y);
      for(int i = x; i <= y; ++i){
	v.push_back(i);
      }
    }
    scanf(" %d", &x);
    sort(v.begin(), v.end());

    auto e = equal_range(v.begin(), v.end(), x);
    bottom = e.first-v.begin();
    top =  (e.second-v.begin())-1;
    if(bottom > top){
      printf("%d not found\n", x);
    }else
      printf("%d found from %d to %d\n", x, bottom, top);
    
  }
  


  return 0;
}
