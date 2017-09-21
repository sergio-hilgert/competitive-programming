#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 70;

typedef long long huge;

int roteadores, cabos;
vector<tuple<int, int, int> > graph;
int parent[maxn];
int size[maxn];

int find(int x){
  while(x != parent[x])
    x = parent[x];
  return x;
}

bool same(int a, int b){
  return find(a) == find(b);
}

void unite(int a, int b){
  a = find(a);
  b = find(b);
  if(size[a] < size[b]) swap(a, b);
  size[a] += size[b];
  parent[b] = a;
}

int kruskal(){
  sort(graph.begin(), graph.end());
  int a, b, w, cost = 0;
  for(int i = 0; i < cabos; ++i){
    tie(w, a, b) = graph[i];
    if(!same(a, b)){
      cost += w;
      unite(a, b);
    }
  }
  return cost;
}

void clear(){
  for(int i = 0; i < roteadores; ++i){
    parent[i] = i;
    size[i] = 1;
  }
  graph.clear();
}

int main(){
  int x, y, w, cost;
  scanf(" %d %d", &roteadores, &cabos);

  clear();

  for(int i = 0; i < cabos; ++i){
    scanf(" %d %d %d", &x, &y, &w);
    graph.push_back(make_tuple(w, x, y));
  }
  
  cost = kruskal();
  printf("%d\n", cost);


  return 0;
}
