#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

typedef long long huge;

int graph[maxn][maxn];
int dist[maxn][maxn];
bool visit[maxn][maxn];
int n;

int ii[4] = {0, 1, 0, -1};
int jj[4] = {-1, 0, 1, 0};

void dj(pair<int,int> begin, pair<int, int> end){
  dist[begin.first][begin.second] = 0;
  int minor_dist;
  pair<int, int> index;

  for(int k = 1; k <= n*n; ++k){
    if(visit[end.first][end.second]){
      //cout << " entrou" << endl;
      return;
    }
    minor_dist = inf;
    for(int i = 1; i <= n; ++i){
      for(int j = 1; j <= n; ++j){
	if(!visit[i][j] && minor_dist > dist[i][j]){
	  minor_dist = dist[i][j];
	  index = make_pair(i,j);
	}
      }
    }
    if(minor_dist == inf){
      //cout << "minor dist inf" << endl;
      return;
    }
    visit[index.first][index.second] = true;
    int path;
    for(int i = 0; i < 4; ++i){
      path = graph[index.first + ii[i]][index.second + jj[i]] + minor_dist;
      if(path < dist[index.first + ii[i]][index.second + jj[i]]){
	dist[index.first + ii[i]][index.second + jj[i]] = path;
      }
    }
  }
}

int main(){
  
  scanf("%d", &n);
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      scanf(" %d", &graph[i][j]);
    }
  }
  for(int i = 0; i < maxn; ++i){
    for(int j = 0; j < maxn; ++j){
      dist[i][j] = inf;
      visit[i][j] = false;
    }
  }
  dj(make_pair(1, 1), make_pair(n, n));
    
  printf("%d\n", dist[n][n]);


  return 0;
}
