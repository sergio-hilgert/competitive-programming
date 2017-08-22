# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, alunos, valor, im, menor, x;
    
    scanf("%d", &n);
    
    while(n--){
        im = 0;
        menor = 999; 
        scanf("%d %d", &alunos, &valor);
        
        for(int i = 1; i <= alunos; ++i){
            scanf("%d", &x);
            if(abs(x - valor) < menor){
                menor = abs(x - valor);
                im = i;
            }
                
        }
        cout<< im<<endl;
        
    }
    
    
    return 0;
}