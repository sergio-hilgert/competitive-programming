#include <bits/stdc++.h>

using namespace std;

const int maxn = 64;

int graph[64][64];
int visit[64];
int v, a, soma;

void dfs(int inicio){
    visit[inicio] = 1;
    for(int i = 0; i < v; ++i){
        if(!visit[i] && graph[inicio][i]){
            soma += 2;
            dfs(i);
        }
        
    }
    
}

void reset(){
    memset(graph, 0, sizeof graph);
    memset(visit, 0, sizeof visit);
    soma = 0;
}

int main(){
    
    int x, y, inicio, n;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &inicio);
        scanf("%d %d", &v, &a);
        reset();
        while(a--){
            scanf("%d %d", &x, &y);
            graph[x][y] = 1;
            graph[y][x] = 1;
        }
        dfs(inicio);
        printf("%d\n", soma);
    }
    
    
    return 0;
}