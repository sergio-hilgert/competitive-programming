#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 70;

typedef long long huge;

int routers, cables;
vector<pair<int, int> > graph[maxn];
int dist[maxn];
bool visited[maxn];

int prim(int start){
  int a, b, w, cost = 0;
  priority_queue <pair<int, int> > pq;
  dist[start] = 0;
  pq.push(make_pair(dist[start], start));

  while(!pq.empty()){
    a = pq.top().second; pq.pop();
    
    if(visited[a]) continue;
    visited[a] = true;

    cost += dist[a];
    
    for(auto &&u: graph[a]){
      b = u.first; w = u.second;
      
      if(w < dist[b]){
	dist[b] = w;
	pq.push(make_pair(-dist[b], b));
      }
    }
  }
  return cost;
}

void clear(){
  for(int i = 0; i < routers; ++i){
    dist[i] = inf;
    graph[i].clear();
    visited[i] = false;
  }
}

int main(){
  int x, y, w, cost = 0;
  
  scanf(" %d %d", &routers, &cables);

  clear();
  
  for(int i = 0; i < cables; ++i){
    scanf(" %d %d %d", &x, &y, &w);
    --x; --y;
    graph[x].push_back(make_pair(y, w));
    graph[y].push_back(make_pair(x, w));
  }
  
  cost = prim(0);
  printf("%d\n", cost);

  return 0;
}
