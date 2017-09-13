#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1010;

typedef long long huge;
bool visited[maxn];
int main(){
  int n, m, x;

  scanf(" %d %d", &n, &m);
  while(m--){
    scanf(" %d", &x);
    visited[x] = true;
  }
  while(n--){
    scanf(" %d", &x);
    if(visited[x]){
      printf("0\n");
    }else{
      visited[x] = true;
      printf("1\n");
    }
  }
  


  return 0;
}
