#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 512;

typedef long long huge;

int h, w, cont;
bool visited[maxn][maxn];
pair<int, int> start, ultimo;

int main(){

  int n, j1, i1, j2, i2;
  while(scanf(" %d %d %d", &w, &h, &n) && (w || h || n)){
    cont = w*h;
    for(int i = 0; i < h; ++i){
      for(int j = 0; j < w; ++j){
	visited[i][j] = false;
      }
    }
    while(n--){
      scanf(" %d %d %d %d", &j1, &i1, &j2, &i2);
      --i1; --j1; --i2; --j2;
      
      if(j2 > j1 && i1 > i2){
	start = make_pair(i2, j1);
	ultimo = make_pair(i1, j2);
  
      }else if(j2 > j1 && i1 < i2){
	start = make_pair(i1, j1);
	ultimo = make_pair(i2, j2);

      }else if(j2 < j1 && i1 > i2){
	start = make_pair(i2, j2);
	ultimo = make_pair(i1, j1);

      }else if(j2 < j1 && i1 < i2){
	start = make_pair(i1, j2);
	ultimo = make_pair(i2, j1);

      }else if(i1 == i2 && j1 < j2){
	start = make_pair(i1, j1);
	ultimo = make_pair(i2, j2);

      }else if(i1 == i2 && j1 > j2){
	start = make_pair(i2, j2);
	ultimo = make_pair(i1, j1);
  
      }else if(i1 < i2 && j1 == j2){
	start = make_pair(i1, j1);
	ultimo = make_pair(i2, j2);
  
      }else if(i1 > i2 && j1 == j2){
	start = make_pair(i2, j2);
	ultimo = make_pair(i1, j1);
      }else{
	if(!visited[i1][j1]){
	  --cont;
	  visited[i1][j1] = true;
	  continue;
	}
      }
      for(int i = start.first; i <= ultimo.first; ++i){
	for(int j = start.second; j <= ultimo.second; ++j){
	  if(!visited[i][j]){
	    visited[i][j] = true;
	    --cont;
	  }
	}
      }
    }
    if(!cont)
      printf("There is no empty spots.\n");
    else if (cont == 1)
      printf("There is one empty spot.\n");
    else
      printf("There are %d empty spots.\n", cont);
  }
  


  return 0;
}
