#include <bits/stdc++.h>
#define Branco -1
#define Preto 0
#define Cinza 1

using namespace std;

vector <int> grafo[200010];
int visitados[200010];
map <string, int> nomes;
int X, qtdCiclos;

int pegaIndex(string nome){
    if(nomes.find(nome) != nomes.end()){
        return nomes[nome];
    }else{
        nomes[nome] = ++X;
        return nomes[nome];
    }
}

int ciclos(int v){
    visitados[v] = Cinza;
    
    for(int i = 0; i < grafo[v].size(); ++i){
        
        int w = grafo[v][i];
        if(visitados[w] == Preto) continue;
        if(visitados[w] == Cinza) {
            visitados[w] = Preto;
            return 1;
        }
        if(ciclos(w) == 1){
            visitados[w] = Preto;
            return 1;
        }
    }
    
    visitados[v] = Preto;
    return 0;
}

int main() {
    string nome1, nome2;
    X = 0;
    qtdCiclos = 0;
    
    memset(visitados, Branco, sizeof visitados);
    
    while (cin >> nome1 >> nome2) {
        grafo[pegaIndex(nome1)].push_back(pegaIndex(nome2));
    }
    
    
    for(int i = 1; i <= X; ++i){
        
        if(visitados[i] == Branco && ciclos(i)){
            ++qtdCiclos;
            visitados[i] = Preto;
        }
    }
    
    cout << qtdCiclos << endl;
    return 0;
}