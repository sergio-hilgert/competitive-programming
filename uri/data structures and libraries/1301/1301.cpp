#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 100010;

typedef long long huge;

int tree[4*maxn];
int sequence[maxn];

void build_tree(int node, int low, int high){
  if(low == high){
    tree[node] = sequence[low];
    //cout << sequence[low] << endl;
    return;
  }

  int mid = low + (high-low)/2;
  build_tree(node*2, low, mid);
  build_tree(node*2+1, mid+1, high);
  tree[node] = tree[node*2] * tree[node*2+1];
}

char converter(int i){
  if(i < 0)
    return '-';
  if(i > 0)
    return '+';
  return '0';
}

void update(int node, int low, int high, int index, int value){
  if(index < low || index > high) return;
  if(low == high){
    tree[node] = value;
    //cout << index << " " << value << endl;
    //cout << "tree["<<low<<"]="<<value<<endl;
    return;
  }

  int mid = low + (high - low)/2;
  
    update(node*2, low, mid, index, value);
  
    update(node*2+1, mid+1, high, index, value);
  
  tree[node] = tree[node*2] * tree[node*2+1];
}

int query(int node, int low, int high, int i, int j){
  // outside
  if(j < low || i > high){
    return 1;
  }
  // total inside
  if(i <= low && j >= high){
    return tree[node];
  }
  // partial inside
  int mid = low + (high-low)/2;
  int p1 = query(node*2, low, mid, i, j);
  int p2 = query(node*2+1, mid+1, high, i ,j);
  return p1*p2;
}

int to_numx(int x){
  return x > 0? 1: x < 0? -1: 0;
}

int main(){

  int n, m, x, y;
  char c;
  while(scanf(" %d %d", &n, &m) != EOF){
    for(int i = 0; i < n; ++i){
      scanf(" %d", &x);
      sequence[i] = to_numx(x);
    }
    build_tree(1, 0, n-1);
    while(m--){
      scanf(" %c %d %d", &c, &y, &x);
      if(c == 'C'){
    // 	 for(int i = 1; i < n*4; ++i)
    //   cout << tree[i] << " ";
    // cout << endl;
	update(1, 0, n-1, y-1, to_numx(x));
    // 	 for(int i = 1; i < n*4; ++i)
    //   cout << tree[i] << " ";
    // cout << endl;
      }else{
	printf("%c", converter(query(1, 0, n-1, y-1, x-1)));
      }
    }
    
    printf("\n");
  
  }


  return 0;
}
