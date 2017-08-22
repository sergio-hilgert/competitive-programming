#include <bits/stdc++.h>

using namespace std;

int visitados[110][110];
int graph[110][110];
int n, m;
int cor;

void dfs(int i, int j){
    visitados[i][j] = cor;
    
    if(!visitados[i+1][j] && graph[i+1][j])
        dfs(i+1, j);
    if(!visitados[i-1][j] && graph[i-1][j])
        dfs(i-1, j);
    if(!visitados[i][j+1] && graph[i][j+1])
        dfs(i, j+1);
    if(!visitados[i][j-1] && graph[i][j-1])
        dfs(i, j-1);
    if(!visitados[i+1][j-1] && graph[i+1][j-1])
        dfs(i+1, j-1);
    if(!visitados[i-1][j-1] && graph[i-1][j-1])
        dfs(i-1, j-1);
    if(!visitados[i+1][j+1] && graph[i+1][j+1])
        dfs(i+1, j+1);
    if(!visitados[i-1][j+1] && graph[i-1][j+1])
        dfs(i-1, j+1);
    
}

int main(){
    char c;
    while(scanf(" %d %d", &m, &n) && m){
        memset(visitados, 0, sizeof visitados);
        memset(graph, 0, sizeof graph);
        cor = 0;
        
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <=n; ++j){
                scanf(" %c", &c);
                if(c == '@')
                    graph[i][j] = 1;
            }
        }
        
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <=n; ++j){
                if(!visitados[i][j] && graph[i][j]){
                    ++cor;
                    dfs(i,j);
                }
                    
            }
        }
        
        cout << cor << endl;
        
    }
    
    
    return 0;
}