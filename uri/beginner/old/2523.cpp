#include <bits/stdc++.h>

using namespace std;

int main(){
    int lamp[30], n, x;
    char c;
    
    while(scanf(" %c", &c) != EOF){
        lamp[1] = (int) c;
       for(int i = 2; i <= 26; ++i){
            scanf(" %c", &c);
            lamp[i] = (int) c;
        }
        scanf("%d", &n);
        
        while(n--){
            scanf(" %d", &x);
            printf("%c", (char)lamp[x]);
        }
        printf("\n");
    }
    
    return 0;
}