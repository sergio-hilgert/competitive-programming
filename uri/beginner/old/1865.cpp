# include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x;
    string nome;

    scanf("%d", &n);

    while(n--){
        cin>> nome >> x;
        if(nome.compare("Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

}
