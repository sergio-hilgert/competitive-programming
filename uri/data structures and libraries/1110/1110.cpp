#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n;
  queue<int> q;
  
  while(scanf(" %d", &n) && n){
    while(!q.empty()) q.pop();

    for(int i = 1; i <= n; ++i)
      q.push(i);


    if(n == 1){
      printf("Discarded cards:\nRemaining card: 1\n");
    }else if(n == 2){
      printf("Discarded cards: 1\nRemaining card: 2\n");
    }else{
      printf("Discarded cards: 1");
      q.pop();
      q.push(q.front());
      q.pop();
      while(q.size() > 1){
	printf(", %d", q.front());
	q.pop();
	q.push(q.front());
	q.pop();
      }
      printf("\nRemaining card: %d\n", q.front());
    }
  }
  


  return 0;
}
