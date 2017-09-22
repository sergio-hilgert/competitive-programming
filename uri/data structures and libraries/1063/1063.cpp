#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  char m;
  int n;
  string str;
  queue<char> q, q2;
  stack<char> s;
  
  while(scanf(" %d", &n) && n){
    while(!q.empty()) q.pop();
    while(!q2.empty()) q2.pop();
    while(!s.empty()) s.pop();
    for(int i = 0; i < n; ++i){
      scanf(" %c", &m);
      q.push(m);
    }

    for(int i = 0; i < n; ++i){
      scanf(" %c", &m);
      q2.push(m);
    }
    str = "";
    bool bad_trip = false;
    while(!q2.empty()){
      if(!s.empty()){
	if(s.top() == q2.front()){
	  str += 'R';
	  q2.pop();
	  s.pop();
	}else if(!q.empty()){
	  str += 'I';
	  s.push(q.front());
	  q.pop();
	}else{
	  bad_trip = true;
	  break;
	}
      }else if(!q.empty()){
	str += 'I';
	s.push(q.front());
	q.pop();
      }
    }
    cout << str;
    if(bad_trip || !q.empty() || !q2.empty() || !s.empty()){
      printf(" Impossible\n");
    }else{
      printf("\n");
    }
  }
  


  return 0;
}
