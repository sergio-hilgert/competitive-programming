# include <bits/stdc++.h>

using namespace std;

int main(){
    
    stack <char> diamonds;
    int n, total = 0;
    string linha;
    
    scanf("%d", &n);
    getchar();
    
    while(n--){
        while(!diamonds.empty()) diamonds.pop();
        total = 0;
        cin>> linha;
        for(int i = 0; i < linha.size(); ++i){
            if(linha[i] == '<')
                diamonds.push(linha[i]);
            else if(linha[i] == '>'){
                if(!diamonds.empty()){
                    diamonds.pop();
                    ++total;
                }
            }
        }
        cout<< total<< endl;
        
    }
    
    
    
}