#include <bits/stdc++.h>

using namespace std;

vector<pair<string, int> > v;

void winner(int curr, pair <string, int> dead){
  //cout << dead.first << endl;
  //cout << "curr: " << curr << " " << dead.second << endl;
  if(v.size() == 1) return;
  if(dead.second & 1){
    // impar
    curr = (curr + dead.second) % v.size();
    dead = v[curr];
    v.erase(v.begin() + curr);
  }else{
    // par
    curr = (curr + v.size() - (dead.second % v.size())) % v.size();
    dead = v[curr];
    v.erase(v.begin() + curr);
  }
  if(dead.second & 1){
    --curr;
    if(curr < 0)
      curr = v.size()-1;
  }
  //cout << "curr: " << curr << " " << dead.second << endl;
  winner(curr, dead);
}

int main(){
	
  int n, value;
  string str;
	
  while(scanf("%d", &n) && n){
    v.clear();
    while(n--){
      cin >> str >> value;
      v.push_back(make_pair(str, value));
    }
    winner(0, v[0]);
    cout << "Vencedor(a): " << v[0].first << endl;
  }
	
  return 0;
}
