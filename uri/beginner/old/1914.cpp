# include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string numero1;
    string numero2;
    string nomes[4];

    scanf("%d", &n);

    while(n--){
        cin>> nomes[0]>> nomes[1]>> nomes[2]>> nomes[3];
        cin>> numero1>> numero2;

        if(((numero1[numero1.size() - 1] - '0') + (numero2[numero2.size() - 1] - '0'))%2 == 0){
            if(nomes[1].compare("PAR") == 0)
            cout<< nomes[0]<< endl;
            else
            cout<< nomes[2]<< endl;
        }
        else{
            if(nomes[1].compare("IMPAR") == 0)
                cout<< nomes[0]<< endl;
            else
                cout<< nomes[2]<< endl;
        }
    }



}
