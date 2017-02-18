# include <bits/stdc++.h>

using namespace std;

int main(){

    map <string, long long int> nSalario;
    string desc, nome;
    long long int soma = 0, sal;
    int a, b;

    cin>> a>> b;

    while(a--){
        cin>>nome >> sal;
        nSalario[nome] = sal;
    }
    cin.clear();
    cin.ignore();
    nome = "";
    while(b--){
        nome = "";
        soma = 0;
        while(getline(cin, desc)){
            if(desc[0] == '.') break;
            stringstream ss(desc);
            while(ss >> nome){
                if(nSalario.find(nome) != nSalario.end()){
                    soma += nSalario[nome];
                }

            }
        }

        cout<< soma<< endl;
    }



}
