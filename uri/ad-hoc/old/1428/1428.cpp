#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, x, y;
  scanf(" %d", &n);
  while(n--){
    scanf(" %d %d", &x, &y);
    x -= 2;
    y -= 2;
    
    if(x % 3 != 0)
      x = x/3 + 1;
    else
      x = x/3;

    if(y % 3 != 0)
      y = y/3 + 1;
    else
      y = y/3;

    //printf("%d %d", x, y);
    printf("%d\n", y*x);
  }
  


  return 0;
}
