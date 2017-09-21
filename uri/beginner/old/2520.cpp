#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m, x;
    int ax, ay, bx, by;
    
    while(scanf("%d %d", &n, &m) != EOF){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                scanf("%d", &x);
                if(x == 1){
                    ax = i;
                    ay = j;
                }
                if(x == 2){
                    bx = i;
                    by = j;
                }
            }
        }
        printf("%d\n", abs(ax-bx) + abs(ay-by));
    
    }
    
    return 0;
}