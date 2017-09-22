#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

bool cmp (const tuple<string, string, string> &a, const tuple<string, string, string> &b){
  return get<0>(a) < get<0>(b) || (get<0>(a) == get<0>(b) && get<1>(a) > get<1>(b)) || (get<0>(a) == get<0>(b) && get<1>(a) == get<1>(b) && get<2>(a) < get<2>(b));
}

int main(){

  string name, color, size;
  int n;
  vector<tuple<string, string, string> > v;
  bool k = false;
  while(scanf(" %d", &n) && n){
    v.clear();
    if(k)
      printf("\n");
    while(n--){
      getchar();
      getline(cin, name);
      cin >> color >> size;
      v.push_back(make_tuple(color, size, name));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); ++i){
      cout << get<0>(v[i]) << " " <<get<1>(v[i]) << " " << get<2>(v[i]) << endl;
    }
    k = true;
  }


  return 0;
}
