#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;

const int maxn = 101;

typedef long long huge;

int weight, value;
int values[maxn];
int weights[maxn];
int pd[maxn][maxn];

int main(){

  int n;
  scanf(" %d", &n);
  while(n--){
    scanf(" %d %d", &weight, &value);
    for(int i = 0; i < value; ++i){
      scanf(" %d %d", &weights[i], &values[i]);
    }
    for(int i = 0; i <= value; ++i){
      for(int j = 0; j <= weight; ++j){
	if(i == 0 || j == 0){
	  pd[i][j] = 0;
	}else{
	  if(weights[i-1] <= j)
	    pd[i][j] = max(pd[i-1][j], values[i-1] + pd[i-1][j - weights[i-1]]);
	  else
	    pd[i][j] = pd[i-1][j];
	}
      }
    }
    int weight_x;
    for(int i = 0; i <= weight; ++i){
      if(pd[value][i] == pd[value][weight]){
	weight_x = i;
	break;
      }
    }
    if(pd[value][weight])
      printf("%d %d\n", pd[value][weight], weight-weight_x);
    else
      printf("NO FUNDS\n");
  }


  return 0;
}
