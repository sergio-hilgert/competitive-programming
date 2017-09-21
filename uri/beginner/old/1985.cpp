# include <bits/stdc++.h>

using namespace std;

int main(){

    double vetor[]={1.5, 2.5, 3.5, 4.5, 5.5};
    double soma = 0, q;
    int n, nPed;

    scanf("%d", &n);

    while(n--){
        cin>> nPed>> q;
        soma += vetor[(nPed%10)-1] * q;
    }
    printf("%.2f\n", soma);



}
