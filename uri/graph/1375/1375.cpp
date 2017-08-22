#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1024;

typedef long long huge;

int position[maxn];
int n;

bool check(int i, int y){
  if(i + y >= 0 && i+y < n){
    if(!position[i+y])
      return true;
  }
  return false;
}

int main(){

  int x, y;
  bool fail;
  while(scanf(" %d", &n) && n){
    fail = false;
    memset(position, 0, sizeof position);
    for(int i = 0; i < n; ++i){
      scanf(" %d %d", &x, &y);
      if(!fail && check(i, y))
	position[i+y] = x;
      else{
	fail = true;
      }
    }
    if(fail)
      printf("-1\n");
    else{
      bool first = false;
      for(int i = 0; i < n; ++i){
	if(!first)
	  printf("%d", position[i]);
	else
	  printf(" %d", position[i]);
	first = true;
      }
      printf("\n");
    }
    
  }
  


  return 0;
}
