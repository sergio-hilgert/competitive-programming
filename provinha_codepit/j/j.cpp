#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 36;
typedef long long huge;

int graph[maxn][maxn];
bool used[maxn][maxn];
int l, c, cont, resp;
vector<pair<int, int> > v;

void clear(){
  for(int i = 0; i < maxn; ++i){
    for(int j = 0; j < maxn; ++j){
      graph[i][j] = -1;
    }
  }
  v.clear();
}

void treco_loco(int i, int j, int c){
  if(graph[i-1][j+1] == 2 && graph[i-2][j+2] == 0){
    graph[i][j] = 0;
    graph[i-1][j+1] = 0;
    graph[i-2][j+2] = 1;
    treco_loco(i-2, j+2, c+1);
    graph[i][j] = 1;
    graph[i-1][j+1] = 2;
    graph[i-2][j+2] = 0;
  }
  if(graph[i-1][j-1] == 2 && graph[i-2][j-2] == 0){
    graph[i][j] = 0;
    graph[i-1][j-1] = 0;
    graph[i-2][j-2] = 1;
    treco_loco(i-2, j-2, c+1);
    graph[i][j] = 1;
    graph[i-1][j-1] = 2;
    graph[i-2][j-2] = 0;
  }
  if(graph[i+1][j-1] == 2 && graph[i+2][j-2] == 0){
    graph[i][j] = 0;
    graph[i+1][j-1] = 0;
    graph[i+2][j-2] = 1;
    treco_loco(i+2, j-2, c+1);
    graph[i][j] = 1;
    graph[i+1][j-1] = 2;
    graph[i+2][j-2] = 0;
  }
  if(graph[i+1][j+1] == 2 && graph[i+2][j+2] == 0){
    graph[i][j] = 0;
    graph[i+1][j+1] = 0;
    graph[i+2][j+2] = 1;
    treco_loco(i+2, j+2, c+1);
    graph[i][j] = 1;
    graph[i+1][j+1] = 2;
    graph[i+2][j+2] = 0;  
  }
  cont = max(cont, c);
}

int main(){
  int x;
  while(scanf(" %d %d", &l, &c) && (l || c)){
    clear();
    for(int i = 2; i < l+2; ++i){
      for(int j = i&1 ? 3: 2; j < c+2; j += 2){
	scanf(" %d", &graph[i][j]);
	if(graph[i][j] == 1)
	  v.push_back(make_pair(i, j));
      }
    }
    resp = 0;
    for(int i = 0; i < v.size(); ++i){
      cont = 0;
      treco_loco(v[i].first, v[i].second, 0);
      resp = max(cont, resp);
    }
    printf("%d\n", resp);
  }
  
  


  return 0;
}
