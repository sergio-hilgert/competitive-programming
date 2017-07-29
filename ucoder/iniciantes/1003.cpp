#include <bits/stdc++.h>

using namespace std;

int graph[1010][1010];
int visit[1010][1010];

int bfs(int i, int j){
    visit[i][j] = 1;
    
    queue<pair<int,int> > q;
    q.push(make_pair(i,j));
    
    while(!q.empty()){
        if(!visit[q.front().first][q.front().second]){ 
    }
    
}


int main(){
    
    
    
    return 0;
}