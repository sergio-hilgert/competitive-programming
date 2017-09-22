#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int n, m;

bool cmp(const int &a, const int &b){
  if(a%m == b%m){
    if(a%2 != 0 && b%2 != 0){
      return a > b;
    }
    if(a%2 == 0 && b%2 == 0){
      return a < b;
    }
    return a % 2 != 0;
  }else
    return a%m < b%m;

}

int main(){

  int x;
  vector<int> v;

  while(scanf(" %d %d", &n, &m) != EOF){
    if(!n && !m){
      printf("0 0\n", n, m);
    }else{
      v.clear();
      for(int i = 0; i < n; ++i){
	scanf(" %d", &x);
	v.push_back(x);
      }
      sort(v.begin(), v.end(), cmp);
      printf("%d %d\n", n, m);
      for(int i = 0; i < n; ++i){
	printf("%d\n", v[i]);
      }
    }
  }

  


  return 0;
}
