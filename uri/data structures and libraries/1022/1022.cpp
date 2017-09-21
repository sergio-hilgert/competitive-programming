#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, n1, n2, d1, d2, gcd, respN, respD;
  char c;
  
  scanf(" %d", &n);
  while(n--){
    scanf(" %d / %d %c %d / %d", &n1, &d1, &c, &n2, &d2);

    if(c == '+'){
      respN = n1*d2 + n2*d1;
      respD = d1*d2;
    }else if(c == '-'){
      respN = n1*d2 - n2*d1;
      respD = d1*d2;
    }else if(c == '*'){
      respN = n1*n2;
      respD = d1*d2;
    }else{
      respN = n1*d2;
      respD = n2*d1;
    }
    printf("%d/%d = ", respN, respD);
    gcd = abs(__gcd(respD, respN));
    respN /= gcd;
    respD /= gcd;
    printf("%d/%d\n", respN, respD);
  }
  


  return 0;
}
