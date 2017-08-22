# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    long x;
    
    while(scanf("%d", &n) != EOF){
        while(n--){
            scanf("%ld", &x);
            printf("%ld\n", (x+1)/2);
        }
        
    }
    
    
    return 0;
}