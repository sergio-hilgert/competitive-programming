#include <bits/stdc++.h>

#define pai(x) (((x) >> 1) | maxn)

using namespace std;
const int inf = INT_MAX;
const int maxn = 1 << 17;


int min_tree[2*maxn];
int n, k;

int query(int start, int end) { // inclusive
  int result = inf;
  while (start <= end) {
    result = min(result, min_tree[start]);
    result = min(result, min_tree[end]);
    start = pai(start+1);
    end = pai(end-1);
  }
  return result;
}
void setup() {
  for(int i=0; i<(2*maxn-1); i+=2)
    min_tree[pai(i)] = min(min_tree[i], min_tree[i+1]);
}
void update(int p, int v) {
  while(p<(2*maxn-1)) {
    min_tree[p] = v;
    v = min(min_tree[p], min_tree[p^1]);
    p = pai(p);
  }
}

void printaResult(){
	for(int i = 0; i < n - k; ++i){
		if(i == n-k-1)
			cout << query(i, i+k) << endl;
		else
			cout << query(i, i+k) << " ";
	}
}

int main(){
	
	while(scanf("%d %d", &n, &k) && (n || k)){
		--k;
		for(int i = 0; i < n; ++i){
			scanf("%d", &min_tree[i]);
		}
		setup();

		printaResult();
	}

	return 0;
}