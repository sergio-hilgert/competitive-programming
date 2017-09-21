#include<bits/stdc++.h>

using namespace std;

int main(){
  
  int n;
  double somaNC, y, x;
  double somaC;
  
  while(scanf("%d", &n) != EOF){
    somaC = 0;
    somaNC = 0;
    while(n--){
      scanf(" %lf %lf", &x, &y);
      somaC += y;
      somaNC += x*y;
    }
    printf("%.4lf\n", somaNC/(somaC * 100));
  }
  
  return 0;
}