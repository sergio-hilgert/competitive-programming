#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 300;

typedef long long huge;

bool cmp(const pair<int,int> &a, const pair<int, int> &b){
  return a.second < b.second || (a.second == b.second && a.first > b.first);
}

int main(){

  string str;
  vector<pair<int, int> > v;
  unordered_map<int, int> m;
  bool k = false;
  
  while(cin >> str){
    m.clear();
    v.clear();
    if(k)
      printf("\n");
    
    for(int i = 0; i < str.size(); ++i){
      m[(int)str[i]]++;
    }
    for(unordered_map<int,int> :: iterator it = m.begin(); it != m.end(); ++it){
      v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); ++i){
      cout << v[i].first << " " << v[i].second << endl;
    }
    k = true;
  }
  


  return 0;
}
