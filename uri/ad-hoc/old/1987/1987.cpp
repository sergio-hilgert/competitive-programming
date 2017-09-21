#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n;
  char c;
  int soma;
  while(scanf(" %d", &n) != EOF){
    soma = 0;
    for(int i = 0; i < n; ++i){
      scanf(" %c", &c);
      soma += c - '0';
    }
    printf("%d ", soma);
    if(soma % 3 == 0)
      printf("sim\n");
    else
      printf("nao\n");
  }
  


  return 0;
}
