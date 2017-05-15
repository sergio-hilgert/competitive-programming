#include <bits/stdc++.h>

using namespace std;

int graph[210][210];
int visit[210][210];
int n;
int ok;

void dfsw(int i, int j){
    visit[i][j] = 1;
    if(j == n){
        ok = 1;
    }
    if(!visit[i-1][j-1] && graph[i-1][j-1])
        dfsw(i-1, j-1);
        
    if(!visit[i-1][j] && graph[i-1][j])
        dfsw(i-1, j);
        
    if(!visit[i][j-1] && graph[i][j-1])
        dfsw(i, j-1);
        
    if(!visit[i][j+1] && graph[i][j+1])
        dfsw(i, j+1);
    
    if(!visit[i+1][j] && graph[i+1][j])
        dfsw(i+1, j);
    
    if(!visit[i+1][j+1] && graph[i+1][j+1])
        dfsw(i+1, j+1);
}

int main(){
    char c;
    int cn = 1;    
    while(scanf(" %d", &n) && n){
        memset(graph, 0, sizeof graph);
        memset(visit, 0, sizeof visit);
        ok = 0;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                scanf(" %c", &c);
                if(c == 'w'){
                    graph[i][j] = 1;
                }
            }
        }
        
        for(int i = 1; i <= n; ++i){
            if(!visit[i][1] && graph[i][1]){
                dfsw(i, 1);
            }
        }
        
        if(ok)
            printf("%d W\n", cn++);
        else
            printf("%d B\n", cn++);
    
    }
    return 0;
}