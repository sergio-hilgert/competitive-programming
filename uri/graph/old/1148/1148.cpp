#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 512;

typedef long long huge;

vector<pair<int, int> > graph[maxn];
bool visited[maxn];
int dist[maxn];
int v, a;

bool find_no_cost(int x, int y){
  bool ok = false;
  for(int i = 0; i < graph[x].size(); ++i)
    if(graph[x][i].first == y){
      return true;
    }
  
  return false;
}

void dj(int begin, int end){
  priority_queue < pair<int, int> > pq;
  for(int i = 0; i < v; ++i){
    dist[i] = inf;
    visited[i] = false;
  }
  dist[begin] = 0;
  pq.push({0,begin});
  while(!pq.empty()){
    int a = pq.top().second; pq.pop();
    if(visited[a]) continue;
    visited[a] = true;
    for(auto &&u: graph[a]){
      int b = u.first, w = u.second;
      if(find_no_cost(b, a)){
	dist[b] = dist[a];
	pq.push({-0, b});
	//	cout << " entrou:" << a+1 << " " << b+1 << endl;
      }else if(dist[b] > dist[a] + w){
	dist[b] = dist[a] + w;
	pq.push({-dist[b], b});
      }
    }
  }
}

int main(){
  int x, y, p;
  bool k = false;
  while(scanf(" %d %d", &v, &a) && (v || a)){

    for(int i = 0; i < v; ++i){
      graph[i].clear();
    }
    
    while(a--){
      scanf(" %d %d %d", &x, &y, &p);
      --x; --y;
      graph[x].push_back({y, p});
    }
    scanf(" %d", &x);
    while(x--){
      scanf(" %d %d", &y, &p);
      --y; --p;
      dj(y,p);
      if(dist[p] != inf){
	printf("%d\n", dist[p]);
      }else
	printf("Nao e possivel entregar a carta\n");
    }
    printf("\n");
  }
  return 0;
}
