# include <bits/stdc++.h>

using namespace std;

int len(int x){
    int a = x == 0? 1: 0;
    while(x){
        x = x/ 10;
        ++a;
    }
    return a;
    
}

long long int ipow(int x, long long int base){
    long long int p = 1;
    while(x){
        if(x & 1)
            p *= base;
        x >>= 1;
        base *= base;
        
    }
    return p;
}
int main(){
    
    int n, ok;
    long long int a, b;
    
    while(scanf("%d", &n) != EOF){
        while(n--){
            ok = 0;
            scanf("%lld %lld", &a, &b);
            a = a - b;
            for(int i = 1; i <= len(b); ++i){
                if(!(a % ipow(i,10)))
                    ok++;
                        
            }
        if(ok == len(b) && a >= 0)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
        }
        
        
    }
    
    
    return 0;
}