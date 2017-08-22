#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  double x, y;
  double result;
  int lados;
  while(scanf(" %lf %lf", &x, &y) && (x || y)){
    result = (x*x*sqrt(3))/4.0;
    lados = 3;
    for(int i =  2; i <= y; ++i){
      x /= 3;
      
      result += ((x*x*sqrt(3))/4.0)*lados;
      lados *= 4;
    }
    printf("%.8lf\n", result);
    
  }


  return 0;
}
