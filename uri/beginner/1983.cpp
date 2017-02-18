# include <bits/stdc++.h>

using namespace std;

int main(){

    double nota, maior = 0;
    long int reg, regM;
    int n;

    cin>> n;

    while(n--){
        cin>> reg>> nota;
        if(nota > maior){
            maior = nota;
            regM = reg;
        }
    }
    if(maior>=8){
        cout<< regM<< endl;
    }else
        cout<< "Minimum note not reached"<< endl;




}
