# include <bits/stdc++.h>

using namespace std;

int main(){
    
    map <string, double> produtos;
    string nome;
    int n, m;
    double soma, valor;
    
    scanf("%d", &n);
    
    while(n--){
        soma = 0;
        produtos.clear();
        scanf("%d", &m);
        while(m--){
            cin>> nome>> valor;
            produtos[nome] = valor;
        }
        scanf("%d", &m);
        while(m--){
            cin>> nome>> valor;
            soma += produtos[nome] * valor;
        }
        printf("R$ %.2f\n", soma);
        
    }
    
    
    
}