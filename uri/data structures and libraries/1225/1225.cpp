#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 10010;

typedef long long huge;
int coral[maxn];

int main(){

  int n, result, soma;
  while(scanf(" %d", &n) != EOF){
    soma = 0;
    for(int i = 0; i < n; ++i){
      scanf(" %d", &coral[i]);
      soma += coral[i];
    }
    if(soma % n == 0){
      soma /= n;
      result = 0;
      for(int i = 0; i < n; ++i){
	if(coral[i] > soma){
	  result += coral[i]-soma;
	}
      }
      printf("%d\n", result+1);
    }else{
      printf("-1\n");
    }
  }
  


  return 0;
}
