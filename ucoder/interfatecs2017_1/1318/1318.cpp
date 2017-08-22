#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

bool verify(string father, string son){
  int cont = 0;
  if(father.size() < 4 || son.size() < 4)
    return false;
  for(int i = 0; i < 4; ++i){
    if(father[i] == son[i])
      ++cont;
  }
  if(cont == 4)
    return true;
  return false;
}

int main(){

  string father, son;
  int n;

  cin >> father;
  scanf(" %d", &n);

  while(n--){
    cin >> son;
    if(verify(father, son))
      printf("VERIFICAR\n");
    else
      printf("NORMAL\n");
  }

  return 0;
}
