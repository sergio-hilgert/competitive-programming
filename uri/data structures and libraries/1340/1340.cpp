#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, op, m;
  stack<int> s;
  queue<int> q;
  priority_queue<int> pq;
  bool is_s, is_q, is_pq;
  
  
  while(scanf(" %d", &n) != EOF){
    while(!s.empty()) s.pop();
    while(!q.empty()) q.pop();
    while(!pq.empty()) pq.pop();

    is_s = is_q = is_pq = true;
    
    while(n--){
      scanf(" %d %d", &op, &m);
      if(op == 1){
	s.push(m);
	q.push(m);
	pq.push(m);
      }else{
	if(is_s && s.top() == m){
	  s.pop();
	}else{
	  is_s = false;
	}
	if(is_q && q.front() == m){
	  q.pop();
	}else{
	  is_q = false;
	}
	if(is_pq && pq.top() == m){
	  pq.pop();
	}else{
	  is_pq = false;
	}
      }
    }
    if(!is_s && !is_q && !is_pq)
      printf("impossible\n");
    else if((is_s && is_q) || (is_s && is_pq) || (is_q && is_pq)){
      printf("not sure\n");
    }else{
      if(is_s)
	printf("stack\n");
      if(is_q)
	printf("queue\n");
      if(is_pq)
	printf("priority queue\n");
    }
  }
  


  return 0;
}
