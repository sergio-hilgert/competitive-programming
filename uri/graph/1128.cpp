#include <bits/stdc++.h>

using namespace std;

vector<int> graph[2010];
vector<int> reversedGraph[2010];
int visitados[2010];
int v, a;

int isAllVisited(){
    for(int i = 0; i < v; ++i){
        if(!visitados[i])
            return 0;
    }
    return 1;
}

void reset(){
    for(int i = 0; i < v; ++i){
        reversedGraph[i].clear();
        graph[i].clear();
        visitados[i] = 0;
    }
}

void resetVisited(){
    memset(visitados, 0, sizeof visitados);
}

void dfs(int inicio){
    visitados[inicio] = 1;
    
    for(int i = 0; i < graph[inicio].size(); ++i){
        if(!visitados[graph[inicio][i]])
            dfs(graph[inicio][i]);
    }
}

void rdfs(int inicio){
    visitados[inicio] = 1;
    
    for(int i = 0; i < reversedGraph[inicio].size(); ++i){
        if(!visitados[reversedGraph[inicio][i]]){
            rdfs(reversedGraph[inicio][i]);
        }
        
    }
}
int isStronglyConnected(){
    
    dfs(0);
    
    if(!isAllVisited())
        return 0;
    
    resetVisited();
    
    rdfs(0);
    
    if(!isAllVisited())
        return 0;
    
    return 1;
}

int main(){
    
    int x, y, p;
    
    while(scanf("%d %d", &v, &a) && (v || a)){
        reset();
        while(a--){
            scanf("%d %d %d", &x, &y, &p);
            --x; --y;
            if(p == 1){
                graph[x].push_back(y);
                reversedGraph[y].push_back(x);
            }else{
                graph[x].push_back(y);
                graph[y].push_back(x);
                reversedGraph[x].push_back(y);
                reversedGraph[y].push_back(x);
            }
        }
        printf("%d\n", isStronglyConnected());
    }
    
    return 0;
}