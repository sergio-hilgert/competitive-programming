#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 2024;

typedef long long huge;

int n, v, a;
vector<tuple<int, int, int> > edges;
int dist[maxn];

int main(){

  int x, y, w;

  scanf(" %d", &n);

  while(n--){
    edges.clear();
    scanf(" %d %d", &v, &a);
    for(int i = 0; i < v; ++i)
      dist[i] = inf;
    while(a--){
      scanf(" %d %d %d", &x, &y, &w);
      edges.push_back({x, y, w});
    }
    
    dist[0] = 0;
    bool infinite_loop = false;
    int a, b, c;

    for(int i = 0; i < v; ++i){
      for(auto &&e: edges){	
	tie(a, b, c) = e;
	if(dist[b] > dist[a] + c){
	  dist[b] = dist[a] + c;
	  if(i == v-1){
	    infinite_loop = true;
	  }
	}
      }
    }
    if(infinite_loop){
      printf("possible\n");
    }else{
      printf("not possible\n");
    }
  }
  return 0;
}
