#include <bits/stdc++.h>

using namespace std;

const int maxn = 30010;

vector< int > graph[maxn];
int parent[maxn];
int size[maxn];
int maior;
bool visited[maxn];
int v, a, cont;

int find(int x){
  while(x != parent[x]){
    x = parent[x];
  }
  return x;
}

bool same(int x, int y){
  return find(x) == find(y);
}

void unite(int a, int b) {
  a = find(a);
  b = find(b);
  if (size[a] < size[b]) swap(a,b);
  size[a] += size[b];
  //cout << "size: " << size[a] << endl;
  maior = max(size[a], maior);
  parent[b] = a;
}

int main(){


  int n, x, y;
  scanf(" %d", &n);
  while(n--){
    maior = 1;
    scanf(" %d %d", &v, &a);
    for(int i = 0; i <= v; ++i){
      graph[i].clear();
      visited[i] = false;
    }
    while(a--){
      scanf(" %d %d", &x, &y);
      graph[x].push_back(y);
      graph[y].push_back(x);
    }
    for(int i = 0; i <= v; ++i){
      parent[i] = i;
      size[i] = 1;
    }
    for(int i = 1; i <= v; ++i){
      for(int j = 0; j < graph[i].size(); ++j){
	//cout << same(i, graph[i][j]) << endl;
	if(!same(i, graph[i][j]))
	  unite(i, graph[i][j]);
      }
    }
    printf("%d\n", maior);
  }
  

  return 0;
}
