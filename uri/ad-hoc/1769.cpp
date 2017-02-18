# include <bits/stdc++.h>

using namespace std;

int main(){
    
    string cpf;
    int sum1, sum2, j;
    
    while(getline(cin, cpf)){
        sum1 = 0;
        sum2 = 0;
        j = 1;
        for(int i = 0; i < cpf.length() - 3; ++i){
            if(cpf[i] >= 48 && cpf[i] <= 57 ){
                sum1 += j * (cpf[i] - '0');
                sum2 += (10-j) * (cpf[i] - '0');
                ++j;
            }
        }
        
        sum1 = (sum1%11);
        sum2 = (sum2%11);
        
        if((sum1 == cpf[12] - '0' || (sum1 == 10 && cpf[12] - '0' == 0)) && (sum2 == cpf[13] - '0' || (sum2 == 10 && cpf[13] - '0' == 0)) )
            printf("CPF valido\n");
        else
            printf("CPF invalido\n");
    
            
    }
    
    
    return 0;
}