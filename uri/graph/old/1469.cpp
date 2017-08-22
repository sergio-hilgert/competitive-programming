#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

typedef long long int huge;
const int inf = 0x3f3f3f3f;
const int maxn = 512;

vector<int> adj[maxn];
int age[maxn];
int sup_age[maxn];
int sup_time[maxn];
int order[maxn];

int dfs(int start, int timestamp, int n) {
  if (sup_time[start] != timestamp) {
    sup_time[start] = timestamp;
    sup_age[start] = inf;
    for(auto it = adj[start].begin();
        it != adj[start].end();
        ++it) {
      sup_age[start] = min(min(sup_age[start],
                               age[*it]),
                           dfs(*it, timestamp, n));
    }
  }
  return sup_age[start];
}

void debug(int timestamp, int n) {
  printf("---------\n");
  for(int i=0; i<n; ++i) {
    printf("vertice %d\n", i);
    printf("adj:");
    for(auto it=adj[i].begin();
        it!= adj[i].end();
        ++it) {
      printf(" %d", *it);
    }
    printf("\nage: %d\n", age[i]);
    printf("busca: %d\n\n", dfs(i, timestamp, n));
  }
}

int main() {
  int n, m, q;
  int x, y, timestamp;
  char cmd;
  while(1) {
    if (scanf(" %d %d %d", &n, &m, &q)!=3)
      break;
    for(int i=0; i<n; ++i) {
      scanf(" %d", &age[i]);
      sup_age[i] = inf;
      sup_time[i] = -1;
      adj[i].clear();
      order[i] = i;
    }
    for(int i=0; i<m; ++i) {
      scanf(" %d %d", &x, &y);
      --x;--y;
      adj[y].push_back(x);
    }
    timestamp = 0;
    for(int i=0; i<q; ++i) {
      //debug(timestamp, n);
      scanf(" %c", &cmd);
      if (cmd=='T') {
        timestamp = i;
        scanf(" %d %d", &x, &y);
        --x;--y;
        swap(age[order[x]], age[order[y]]);
        swap(order[x],order[y]);
      }
      else {
        scanf(" %d", &x);
        --x;
        y = dfs(order[x], timestamp, n);
        if (y==inf) {
          printf("*\n");
        }
        else {
          printf("%d\n", y);
        }
      }
    }
  }
  //debug(timestamp, n);
  return 0;
}