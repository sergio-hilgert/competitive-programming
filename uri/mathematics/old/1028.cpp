# include <bits/stdc++.h>

using namespace std;

int gcd(int n, int p){
    while(n % p != 0){
        if(n < p) swap(n,p);
        n = n % p;
    }
    return p;
}

int main(){
    
    int n, f1, f2;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d %d", & f1, &f2);
        printf("%d\n", gcd(f1,f2));
        
    }
    
    
    return 0;
}