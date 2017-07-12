#include <bits/stdc++.h>

using namespace std;

int main(){
  
  vector<string> servers[210];
  vector<string> clients[210];
  
  int n, m, x, cont;
  string str;
  
  while(scanf(" %d %d", &n, &m) && (m||n)){
    cont = 0;
    for(int i = 0; i < max(m,n); ++i){
      servers[i].clear();
      clients[i].clear();
    }
    for(int i = 0; i < n; ++i){
      scanf(" %d", &x);
      while(x--){
        cin >> str;
        servers[i].push_back(str);
      }
    }
    
    for(int j = 0; j < m; ++j){
      scanf(" %d", &x);
      while(x--){
        cin >> str;
        clients[j].push_back(str);
      }     
    }
    int ok = 0;
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        for(int k = 0; k < servers[i].size(); ++k){
          for(int p = 0; p < clients[j].size(); ++p){
            if(servers[i][k] == clients[j][p]){
              ++cont;
              ok = 1;
              //cout << servers[i][k] << " " << clients[j][p] << endl;
              break;
            }
          }
          if(ok) break;
        }
        if(ok)
          ok = 0;
        
      }
    }
    cout << cont << endl;
  }
    
  return 0;
}