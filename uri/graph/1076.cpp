# include <bits/stdc++.h>

using namespace std;

int grafo[60][60];
int visitados[60];
int cont, v;

void dfs(int inicio){
    visitados[inicio] = 1;
    for(int i = 0; i < v; ++i){
        if(grafo[inicio][i] == 1 && visitados[i] == 0){
            ++cont;
            dfs(i);
        }
    }
}

void bfs(int inicio){
    queue <int> fila;
    fila.push(inicio);
    visitados[inicio] = 1;
    
    while(!fila.empty()){
        for(int i = 0; i < v; ++i){
            if(grafo[fila.front()][i] == 1 && visitados[i] == 0){
                fila.push(i);
                visitados[i] = 1;
                ++cont;
            }
        }
        fila.pop();
    }
}


int main (){
    
    int n, a, inicio, a1, a2;
    scanf("%d", &n);
    
    while(n--){
        memset(visitados, 0 , sizeof(visitados));
        memset(grafo, 0 , sizeof(grafo));
        cont = 0;
        scanf("%d", &inicio);
        scanf("%d %d", &v, &a);
        while(a--){
            scanf("%d %d", &a1, &a2);
            grafo[a1][a2] = 1;
            grafo[a2][a1] = 1;
        }
        bfs(inicio);
        printf("%d\n", cont*2);
        
    }
    
    return 0;
}