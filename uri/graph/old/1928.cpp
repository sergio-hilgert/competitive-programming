#include <bits/stdc++.h>
# define MAXVERT 50500
# define MAXLOG 20
 
using namespace std;

int n;
int aux[MAXVERT];
int par[MAXVERT];

int nivel[MAXVERT];
int pai[MAXVERT];
int anc[MAXVERT][MAXLOG]; //log n

vector<int> grafo[MAXVERT] ; //cria um array de vectors!! ex: grafo[1].push_back(2);

void dfs(int u){
    
    for(int i = 0; i < (int)grafo[u].size(); i++){
        int v = grafo[u][i];
        
        if(nivel[v] == -1){
            //pai do vertice vai sempre ser o anterior
            pai[v] = u;
            //nivel é igual ao nivel do anterior mais um
            nivel[v] = nivel[u] + 1;
            //chama a dfs para os valores adjacentes
            dfs(v);
        }
    }
}

int LCA(int pontoA, int pontoB){
    
    if (nivel[pontoA] < nivel[pontoB]) swap(pontoA, pontoB);
    
    for (int i = MAXLOG - 1; i >= 0; --i)
        if (nivel[pontoA] - (1 << i) >= nivel[pontoB])
            pontoA = anc[pontoA][i];
        
    if (pontoA == pontoB) return pontoA;
    
    for (int i = MAXLOG - 1; i >= 0; --i){
        if (anc[pontoA][i] != -1 && anc[pontoA][i] != anc[pontoB][i]){
            pontoA = anc[pontoA][i];
            pontoB = anc[pontoB][i];
        }
    }
    
    return pai[pontoA];
}


int main(){
    
    scanf("%d", &n);
    
    memset(aux, 0, sizeof(aux));
    
    for(int i = 1; i <= n; ++i){
        
        int x;
        scanf("%d", &x);
        
        if(aux[x]){
            par[i] = aux[x];
            par[aux[x]] = i;
            
        }
        aux[x] = i;
    }
    
    for(int i = 1; i < n; ++i){
        int a1, a2;
        scanf("%d %d", &a1, &a2);
        
        grafo[a1].push_back(a2);
        grafo[a2].push_back(a1);
    }
    
    memset(pai, -1, sizeof(pai));
    memset(nivel, -1, sizeof(nivel));
    memset(anc, -1, sizeof(anc));
    
    
    nivel[1] = 0;
    dfs(1);
    
    //definir a coluna [i][0] da tabela ancestral como o vetor de pai
    for(int i = 1; i <= n; ++i)
        anc[i][0] = pai[i];
    
    //nao esquecer de usar o n, não precisa usar o MAXVERT
    for(int j = 1; j < MAXLOG; ++j){
        for(int i = 1; i <= n; ++i){
            if(anc[i][j-1] != -1){
                anc[i][j] = anc[ anc[i][j-1] ][j-1];
            }
        }
    }
    
    long long resposta = 0LL;
    
    for(int i = 1; i <= n; ++i){
        resposta += (long long)(nivel[i] + nivel[par[i]] - 2*nivel[ LCA(i, par[i]) ]);
        
    }
    
    printf("%lld\n", resposta/2);
    
    return 0;
}