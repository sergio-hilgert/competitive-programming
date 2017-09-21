#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  stack<int> a, station;
  int n, m, w;
  while(scanf(" %d", &w) && w){
    while(scanf(" %d", &m) && m){
      n = w;
      while(!a.empty()) a.pop();
      while(!station.empty()) station.pop();
      a.push(m);
      for(int i = 0; i < n-1; ++i){
	scanf(" %d", &m);
	a.push(m);
      }
      while(!a.empty() || !station.empty()){
	if(!a.empty()){
	  if(a.top() == n){
	    a.pop();
	    --n;
	  }else if(!station.empty() && station.top() == n){
	    station.pop();
	    --n;
	  }else{
	    station.push(a.top());
	    a.pop();
	  }
	}else if(!station.empty()){
	  if(station.top() == n){
	    station.pop();
	    --n;
	  }else{
	    break;
	  }
	}else {
	  break;
	}
      }
      cout << (a.empty() && station.empty()? "Yes":"No") << endl;
    }
    cout << endl;
  }
  
  return 0;
}
