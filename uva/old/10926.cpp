#include <bits/stdc++.h>

using namespace std;

int graph[120][120];
int visitados[120];
pair<int, int> maximo;
int maximoX;
int n, x, y;

int dfs(int inicio){
    maximoX++;
    visitados[inicio] = 1;
    for(int i = 0; i < n; ++i){
        if(!visitados[i] && graph[inicio][i])
            dfs(i);
    }
}

int main(){
    
    
    while(scanf("%d", &n) && n){
        memset(graph, 0, sizeof graph);
        maximo = make_pair(0,0);
        for(int i = 0; i < n; ++i){
            scanf("%d", &x);
            for(int i = 0; i < x; ++i){
                scanf("%d", &y);
                graph[x][y] = 1;
            }
        }
        maximo.second = 0;
        for(int i = 0; i < n; ++i){
            memset(visitados, 0, sizeof visitados);
            maximoX = 0;
            dfs(i);
            if(maximoX > maximo.second){
                maximo.second = maximoX;
                maximo.first = i;
            }
        
            
        }
        
        cout << maximo.first << endl;
        
    }
    
    
    return 0;
}