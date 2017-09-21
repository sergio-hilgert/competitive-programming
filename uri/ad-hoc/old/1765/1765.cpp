#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  int n, x, qnt, k, h = 5;
  double b, B;
  while(scanf(" %d", &n) && n){
    k = 1;
    while(n--){
      scanf(" %d %lf %lf", &qnt, &b, &B);
      printf("Size #%d:\n", k++);
      printf("Ice Cream Used: %.2lf cm2\n", (double)(((b+B)*h)/2.0*qnt));
    }
    printf("\n");
  }
  


  return 0;
}
