# include <bits/stdc++.h>

using namespace std;
long long unsigned p;

void ipow(int x, long long unsigned base){
    if(x == 64){
        p = 0;
        p -= 1;
        return;
    }
    while(x){
        if(x & 1)
            p *= base;
        x >>= 1;
        base *= base;
        
    }
}

int main(){
    
    int n, x;
    
    while(scanf("%d", &n) != EOF){
        while(n--){
            p = 1;
            scanf("%d", &x);
            ipow(x, 2);
            p = p /12000;
            cout << p<< " kg\n";
        }
    }
    
    
    
    return 0;
}