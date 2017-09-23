#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

typedef long long huge;

bool cmp(const tuple<int, double, int, int> &a, const tuple<int, double, int, int> &b){
   return get<0>(a) > get<0>(b) ||
    (get<0>(a) == get<0>(b) && get<1>(a) > get<1>(b)) ||
    (get<0>(a) == get<0>(b) && get<1>(b) == get<1>(a) && get<2>(a) > get<2>(b)) ||
    (get<0>(a) == get<0>(b) && get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b) && get<3>(a) < get<0>(b));
}

int main(){

  int n, team1, team2, p1, p2, cont = 0;
  double points[maxn];
  double re_points[maxn];
  int win_points[maxn];
  bool k = false;
  // win, average, points, team
  vector<tuple<int, double, int, int> > v; 

  while(scanf(" %d", &n) && n){
    v.clear();
    if(k)
      printf("\n");
    for(int i = 1; i <= n; ++i){
      win_points[i] = 0;
      points[i] = 0;
      re_points[i] = 0;
    }
    for(int i = 0; i < n*(n-1)/2; ++i){
      scanf(" %d %d %d %d", &team1,  &p1, &team2, &p2);

      if(p1 > p2){
	win_points[team1] += 2;
	win_points[team2]++;
      }else{
	win_points[team2] += 2;
	win_points[team1]++;
      }
      points[team1] += p1;
      points[team2] += p2;
      re_points[team1] += p2;
      re_points[team2] += p1;
    }

    for(int i = 1; i <= n; ++i){
      v.push_back(make_tuple(win_points[i], re_points[i]? points[i]/re_points[i]:points[i], (int)points[i], i));
    }
    sort(v.begin(), v.end(), cmp);
    printf("Instancia %d\n", ++cont);
    for(int i = 0; i < v.size(); ++i){
      if(!i)
	printf("%d", get<3>(v[i]));
      else
	printf(" %d", get<3>(v[i]));
    }
    printf("\n");
    
    k = true;
  }

  return 0;
}
