#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

bool cmp(const tuple<string, int, int, double> &a, const tuple<string, int, int, double> &b){
  return get<1>(a) > get<1>(b) ||
    (get<1>(a) == get<1>(b) && get<2>(a) < get<2>(b)) ||
    (get<1>(a) == get<1>(b) && get<2>(b) == get<2>(a) && get<3>(a) < get<3>(b)) ||
    (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b) && get<3>(a) == get<3>(b) && get<0>(a) < get<0>(b));
}

int main(){

  int n, a, b, weight, age, k = 0;
  string name;
  double height;
  vector<tuple<string, int, int, double> > v;
  
  scanf(" %d", &n);

  while(n--){
    scanf(" %d %d", &a, &b);
    v.clear();
    while(a--){
      cin >> name >> weight >> age >> height;
      v.push_back(make_tuple(name, weight, age, height));
    }
    sort(v.begin(), v.end(), cmp);
    printf("CENARIO {%d}\n", ++k);

    for(int i = 0; i < v.size() && i < b; ++i){
      cout << i+1 << " - " << get<0>(v[i]) << endl;
    }
  }
  


  return 0;
}
