# include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i = 1;
    vector <int> tot;


    while(scanf("%d", &n) != EOF){
        tot.clear();
        tot.push_back(0);
        for(int p = 0; p <= n; ++p){
            for(int j = 0; j < p; ++j)
                tot.push_back(p);

        }
        if(tot.size() <= 1){
            cout<< "Caso "<< i<< ": "<< tot.size()<< " numero"<< endl;
            for(int i = 0; i< tot.size(); ++i){
                if(i == tot.size() - 1)
                    cout<< tot[i]<< endl;
                else
                    cout<< tot[i]<< " ";
            }
            cout<< endl;
        }else{
            cout<< "Caso "<< i<< ": "<< tot.size()<< " numeros"<< endl;
            for(int i = 0; i< tot.size(); ++i){
               if(i == tot.size() - 1)
                    cout<< tot[i]<< endl;
                else
                    cout<< tot[i]<< " ";
            }
            cout<< endl;
        }
        ++i;
    }


}
