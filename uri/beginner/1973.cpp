# include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i = 0, somaV = 0;

    scanf("%d", &n);
    long long int ovelhas[n], somaC = 0;
    int vilas[n];



    for(int i = 0; i < n; ++i){
        cin>> ovelhas[i];
        vilas[i] = 0;
    }

    while(ovelhas[i] != 0 && i < n && i >= 0){
        if(vilas[i] == 0) vilas[i] = 1;
        if(ovelhas[i] % 2 == 0){
            ovelhas[i] -= 1;
            --i;
        }else{
            ovelhas[i] -= 1;
            ++i;
        }

    }

    for(int i = 0; i < n; ++i){
        somaC += ovelhas[i];
        somaV += vilas[i];
    }
    cout<< somaV<< " "<< somaC<< endl;
}
