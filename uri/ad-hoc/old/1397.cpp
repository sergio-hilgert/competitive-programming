# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n = 1, a, b, A = 0,B = 0;
    
    while(true){
        scanf("%d", &n);
        if(n == 0) break;
        A = 0; B = 0;
        while(n--){
            scanf("%d %d", &a, &b);
            A = a > b? A+1: A+0;
            B = b > a? B+1: B+0;
        }
        printf("%d %d\n", A, B);
        
        
    }
    
    
    return 0;
}