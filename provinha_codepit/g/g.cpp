#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int l, c, r1, r2, p1, p2;
  pair<int, int> center1, center2;
  double dist;
  while(scanf(" %d %d %d %d", &l, &c, &r1, &r2) && (l || c || r1 || r2)){
    if(r1*2 > l || r1*2 > c || r2*2 > l || r2*2 > c){
      printf("N\n");
      continue;
    }
    center1 = make_pair(r1, r1);
    center2 = make_pair(l - r2, c - r2);
    p1 = (center1.first-center2.first)*(center1.first-center2.first);
    p2 = (center1.second-center2.second)*(center1.second-center2.second);
    dist = sqrt(p1 + p2);
    if(dist >= r1+r2){
      printf("S\n");
    }else
      printf("N\n");
      
  }
  


  return 0;
}
