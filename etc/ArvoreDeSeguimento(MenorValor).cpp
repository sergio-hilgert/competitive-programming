const int maxn = 1 << 5; // potencia de 2
#define pai(x) (((x)>>1)|maxn)
int min_tree[2*maxn];

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