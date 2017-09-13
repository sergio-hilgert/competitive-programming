#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  int n, xant, x, soma1, soma2, cont1, cont2, i1, i2;
  
  while(scanf(" %d", &n) && n){
    soma1 = soma2 = 0;
    cont1 = cont2 = 0;
    i1 = i2 = inf;
    for(int i = 0; i < n; ++i){
      scanf(" %d", &x);
      if(i != 0){
	if(i1 == inf){
	  //cout << xant << " " << x << endl;
	  if(xant == x)
	    ++cont1;
	  else
	    cont1 = 0;
	}
	if(cont1 == 2){
	  i1 = i-2;
	  cont1 = 0;
	}
      }
      soma1 += x;
      xant = x;
    }
    for(int i = 0; i < n; ++i){
      scanf(" %d", &x);
      if(i != 0){
	if(i2 == inf){
	  if(xant == x)
	    ++cont2;
	  else
	    cont2 = 0;
	}
	if(cont2 == 2){
	  i2 = i-2;
	  cont2 = 0;
	}
      }
      soma2 += x;
      xant = x;
    }
    //cout << i1 << " " << i2 << endl;
    if(i1 != i2){
      if(i1 < i2)
	soma1 += 30;
      else
	soma2 += 30;
    }
    //cout << soma1 << " " << soma2 << endl;
    if(soma1 == soma2){
      printf("T\n");
    }else if(soma1 > soma2){
      printf("M\n");
    }else{
      printf("L\n");
    }
  }
  
  


  return 0;
}
