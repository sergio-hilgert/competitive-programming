#include <cstdio>
#include <stack>
using namespace std;

const int maxn = 1024;
int mtx[maxn][maxn];

void dfs(int i, int j, int k) {
  stack<pair<int, int> > st[2];
  int current = 0;
  mtx[i][j]=4;
  st[current].push(make_pair(i, j));
  while(k > 0) {
    while(!st[current].empty()) {
      i = st[current].top().first;
      j = st[current].top().second;
      st[current].pop();
      for(int di=-1; di<2; ++di)
	for(int dj=-1; dj<2; ++dj)
	  if (dj!=0) { 
	    // nao pode mover na vertical
	    if (mtx[i+di][j+dj]==0) { 
	      // move direto
	      mtx[i+di][j+dj]=4;
	      st[1-current].push(make_pair(i+di, j+dj));
	    }
	    else if (mtx[i+di][j+dj]==1 && mtx[i+2*di][j+2*dj]==0) {
	      // move pulando um
	      mtx[i+2*di][j+2*dj]=4;
	      st[1-current].push(make_pair(i+2*di, j+2*dj));
	    }
	  }
    }
    current = 1-current;
    --k;
  }
  mtx[i][j]=4;
  if (k>0) {
  }
}

int main() {
  int n, m, k;
  int start_i, start_j;
  while(true) {
    scanf(" %d %d %d", &n, &m, &k);
    if (n==0 && m==0 && k==0)
      break;
    for(int i=0; i<n+2; ++i)
      for(int j=0; j<m+2; ++j)
	mtx[i][j]=2;
    for(int i=1; i<=n; ++i)
      for(int j=1; j<=m; ++j) {
	scanf(" %d", &mtx[i][j]);
	if (mtx[i][j]==3) {
	  start_i=i;
	  start_j=j;
	}
      }
    dfs(start_i, start_j, k);
    for(int i=1; i<=n; ++i) {
      for(int j=1; j<=m; ++j)
	if (j>1)
	  printf(" %d", mtx[i][j]);
	else
	  printf("%d", mtx[i][j]);
      printf("\n");
    }
  }
  return 0;
}
