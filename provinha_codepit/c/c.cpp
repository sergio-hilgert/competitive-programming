#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 2048;

typedef long long huge;

int v, a, dfs_counter, rdfs_counter;
bool graph[maxn][maxn];
bool rgraph[maxn][maxn];
bool visited[maxn];

void dfs(int begin){
  dfs_counter++;
  visited[begin] = true;
  for(int i = 0; i < v; ++i){
    if(!visited[i] && graph[begin][i]){
      dfs(i);
    }
  }
}

void rdfs(int begin){
  rdfs_counter++;
  visited[begin] = true;
  for(int i = 0; i < v; ++i){
    if(!visited[i] && rgraph[begin][i])
      rdfs(i);
  }
}

void clear(){
  for(int i = 0; i < v; ++i)
    visited[i] = false;
}

int main(){

  int x, y, dir;
  
  while(scanf(" %d", &v) && v){
    scanf(" %d", &a);
    for(int i = 0; i < v; ++i){
      for(int j = 0; j < v; ++j){
	graph[i][j] = false;
	rgraph[i][j] = false;
      }
    }
    while(a--){
      scanf(" %d %d %d", &x, &y, &dir);
      --x; --y;
      if(dir == 1){
	graph[x][y] = true;
	rgraph[y][x] = true;
      }else{
	graph[x][y] = true;
	graph[y][x] = true;
	rgraph[x][y] = true;
	rgraph[y][x] = true;
      }
    }

    dfs_counter = rdfs_counter = 0;
    clear();
    dfs(0);
    //cout << "dfs: " << dfs_counter << endl;
    if(dfs_counter == v){
      clear();
      rdfs(0);
      //scout << "rdfs: " << rdfs_counter << endl;
      if(rdfs_counter == v){
	printf("1\n");
      }else{
	printf("0\n");
      }
    }else{
      printf("0\n");
    }
    
  }


  return 0;
}
