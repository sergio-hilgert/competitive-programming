#include <bits/stdc++.h>

using namespace std;

const int maxn = 16;

queue<int> q[maxn];

void calc2(int atual, int anterior){
  int front;
  while(!q[atual].empty()){
    front = q[atual].front(); q[atual].pop();
    if(front == 1){
      q[1].push(atual);
      continue;
    }
    
    calc2(front, atual);
  }
}
int main(){
  string str;
  int n;
  
  while(scanf(" %d", &n) && n != -1){
    for(int i = 2; i <= n; ++i)
      while(!q[i].empty()) q[i].pop();
    
    for(int i = 2; i <= n; ++i){
      cin >> str;
      for(int j = 0; j < str.size(); ++j){
        q[i].push(str[j] - '0');
      }
    }
    // atual, anterior
    calc2(2, 0);
    
    while(!q[1].empty()){
      cout << q[1].front();
      q[1].pop();
    }
    cout << endl;
    
  }  
    
  return 0;
}