#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000;
const int inf = 0x3f3f3f3f;

vector<pair <int, int> > graph[maxn*maxn + 10];
int dist[maxn*maxn + 10];
int x, y;

void limpa(int n){
	for(int i = 0; i <= n; ++i){
		graph[i].clear();
		dist[i] = inf;
	}
}
void djk(int start) {
	// dist, edge
  set<pair<int, int> > q;
  dist[start]=0;
  q.insert(make_pair(0, start));
  while(!q.empty()) {
    int current = q.begin()->second;
    q.erase(q.begin());
    for(int i = 0; i < graph[current].size(); ++i) {
    	pair<int, int> edge = graph[current][i];
      if (dist[edge.first] > dist[current]+edge.second) {
        //remove from q
        set<pair<int, int> > :: const_iterator it = q.find(make_pair(dist[edge.first], edge.first));
        if (it!=q.end()) {
          q.erase(it);
        }
        //update distance
        dist[edge.first]=dist[current]+edge.second;
        //insert into q
        q.insert(make_pair(dist[edge.first], edge.first));
      }
    }
  }
}

int main(){
	int n;
	scanf("%d", &n);
	int value_item;
	while(n--){
		
		scanf(" %d %d", &x, &y);
		limpa(x*y + 10);
		for(int i = 0; i < x; ++i){
			for(int j = 0; j < y; ++j){
				scanf("%d", &value_item);
				if(j != 0){
					graph[i*y+j].push_back(make_pair(i*y+j-1, value_item));
				}
				if(i != 0){
					graph[i*y+j].push_back(make_pair(i*y+j-y, value_item));	
				}
				if(i != x-1){
					graph[i*y+j].push_back(make_pair(i*y+j+y, value_item));	
				}
				if(j != y-1){
					graph[i*y+j].push_back(make_pair(i*y+j+1, value_item));
				}
				
			}
		}
		djk(0);
		printf("%d\n", dist[x*y-1] + value_item);
	}
	
	return 0;
}