#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1024;

typedef long long huge;

int v, a;
int dist[maxn];
vector<pair<int, int> > graph[maxn];
bool visited[maxn];

void dj(int begin){
  for(int i = 0; i <= v+1; ++i){
    dist[i] = inf;
    visited[i] = false;
  }
  priority_queue<pair<int, int> > pq;
  dist[begin] = 0;
  pq.push(make_pair(0, begin));
  int a, b, w;
  while(!pq.empty()){
    a = pq.top().second; pq.pop();
    if(visited[a]) continue;
    visited[a] = true;
    for(auto &&u: graph[a]){
      b = u.first; w = u.second;
      if(dist[b] > dist[a] + w){
	dist[b] = dist[a]+w;
	pq.push(make_pair(-dist[b], b));
      }
    }
  }
}

int main(){

  int x, y, w;
  
  scanf(" %d %d", &v, &a);
  while(a--){
    scanf("%d %d %d", &x, &y, &w);
    graph[x].push_back(make_pair(y, w));
    graph[y].push_back(make_pair(x, w));
  }

  dj(0);

  printf("%d\n", dist[v+1]);
  


  return 0;
}
