#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, m, a, b;
  stack<pair<int, int> > s;
  bool ok;
  while(scanf(" %d %d", &n, &m) && (m || n)){
    while(!s.empty()) s.pop();
    ok = true;
    
    while(n--){
      scanf(" %d %d", &a, &b);

      if(!ok) continue;

      if(s.empty()){
	s.push(make_pair(a, b));
	continue;
      }
      
      if(a >= s.top().second){
	s.pop();
	while(!s.empty() && a >= s.top().second){
	  s.pop();
	}
	if(!s.empty() && s.top().second < b){
	  ok = false;
	}else{
	  s.push(make_pair(a, b));
	}
      }else if(s.size() < m){
	if(b < s.top().second){
	  s.push(make_pair(a,b));
	}else{
	  ok = false;
	}
      }else{
	ok = false;
      }
    }
    if(ok)
      printf("Sim\n");
    else
      printf("Nao\n");
  }
  


  return 0;
}
