# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, a ,b;
    int tamanho[250][250];
    int visitados[250][250];
    vector <int> v;
    
    while(scanf("%d", &n) != EOF){
        v.clear();
        
        memset(tamanho, 0 , sizeof(tamanho));
        memset(visitados, 0 , sizeof(visitados));
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                scanf("%d", &tamanho[i][j]);
            }
        }
    
        for(int i = 0; i < n*2; ++i){
            scanf("%d %d", &a, &b);
            visitados[a-1][b-1] = 1;
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(visitados[i][j]){
                    if(find(v.begin(), v.end(), tamanho[i][j]) == v.end())
                        v.push_back(tamanho[i][j]);
                }
            }
        }
        printf("%d\n", (int) v.size());
        
    }
    
    return 0;
}