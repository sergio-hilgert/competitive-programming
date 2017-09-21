# include <bits/stdc++.h>
# define pii pair <string, string>
using namespace std;

int main(){
    
    map<pii,string> m;
    
    m[pii("ataque", "pedra")] = "Jogador 1 venceu";
    m[pii("pedra", "ataque")] = "Jogador 2 venceu";
    m[pii("pedra", "papel")] = "Jogador 1 venceu";
    m[pii("papel", "pedra")] = "Jogador 2 venceu";
    m[pii("ataque", "papel")] = "Jogador 1 venceu";
    m[pii("papel", "ataque")] = "Jogador 2 venceu";
    m[pii("papel", "papel")] = "Ambos venceram";
    m[pii("pedra", "pedra")] = "Sem ganhador";
    m[pii("ataque", "ataque")] = "Aniquilacao mutua";
    string str1, str2;
    int n;
    
    while(scanf("%d", &n) != EOF){
        cin>>str1>>str2;
        cout<< m[pii(str1,str2)]<<endl;
    }
    
    return 0;
}