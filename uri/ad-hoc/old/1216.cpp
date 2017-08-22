# include <bits/stdc++.h>

using namespace std;

int main(){

    string nome;
    double dist, soma, i = 0;
    
    while(getline(cin, nome)){
        cin>> dist;
        getchar();
        soma += dist;
        ++i;
    }
    printf("%.1lf\n", soma/i);
    
    return 0;
}