# include <bits/stdc++.h>

using namespace std;

int t, maximo, salto;


int quemVive(int n, int k){
    if(n==1) return 1;
    return (((quemVive(n-1, k) + k-1)%n)+1);   
}

int main(){
    
    
    scanf("%d", &t);
    
    for(int i = 1; i <= t; ++i){
        
        scanf("%d %d", &maximo, &salto);
        cout<<"Case "<<i<<": " <<quemVive(maximo,salto) << endl;
        
    }
    return 0;
}