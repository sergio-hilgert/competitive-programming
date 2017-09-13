#include <bits/stdc++.h>

using namespace std;

const int maxn = 256;

bool enemies[maxn][maxn];
bool friends[maxn][maxn];
pair<int, int> size_parent[maxn];
int maior;
int n, m, x, y;

void fix_graph(){
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < m; ++j){
      if(!enemies[i][j]) continue;
      for(int k = 0; k < m; ++k){
        if(enemies[j][k] && !enemies[i][k] && i != k){
	  friends[i][k] = true;
	}
      }
    }
  }
}

int find(int x){
  while(x != size_parent[x].second){
    x = size_parent[x].second;
  }
  return x;
}

bool same(int x, int y){
  return find(x) == find(y);
}

void unite(int x, int y){
  x = find(x);
  y = find(y);

  if(size_parent[x].first < size_parent[y].first) swap(size_parent[x].first, size_parent[y].first);
  size_parent[x].first += size_parent[y].first;
  size_parent[y].second = x;
}

int main (){  

  scanf(" %d", &n);
  while(n--){
    maior = 1;
    scanf(" %d", &m);
    for(int i = 0; i < m; ++i){
      for(int j = 0; j < m; ++j){
	enemies[i][j] = false;
	if(i == j)
	  friends[i][j] = true;
	else
	  friends[i][j] = false;
      }
      size_parent[i].first = 1;
      size_parent[i].second = i;
    }
    for(int i = 0; i < m; ++i){
      scanf(" %d", &x);
      while(x--){
	scanf(" %d", &y);
	--y;
	enemies[i][y] = true;
	enemies[y][i] = true;
      }
    }
    fix_graph();
    for(int i = 0; i < m; ++i){
      for(int j = 0; j < m; ++j){
	if(friends[i][j] && !same(i, j))
	  unite(i, j);
      }
    }

    for(int i = 0; i < m; ++i){
      for(int j = 0; j < m; ++j){
	printf("%d ", friends[i][j]);
      }
      printf("\n");
    }
    printf("%d\n", maior);
    sort(size_parent, size_parent + m);
    for(int i = 0; i < m; ++i){
      printf("%d ", size_parent[i].first);
    }
    printf("\n");
    for(int i = 0; i < m; ++i){
      printf("%d ", size_parent[i].second);
    }
    printf("\n");
  }
  
  return 0;
}
