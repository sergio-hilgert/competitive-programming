#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

typedef long long huge;
int alunos[maxn];

int main(){
  int n, x, maior;
  while(scanf(" %d", &n) && n){
    memset(alunos, 0, sizeof alunos);
    maior = 0;
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
	scanf(" %d", &x);
	alunos[j] += x;
      }
    }
    for(int i = 0; i < n; ++i){
      maior = max(alunos[i], maior);
    }
    printf("%d\n", maior);
  }
  


  return 0;
}
