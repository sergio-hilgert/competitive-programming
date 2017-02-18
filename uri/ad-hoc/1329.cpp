# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m = 0, j = 0, x;
    
    while(scanf("%d",&n)){
        if(n == 0) break;
        m = 0; j = 0;
        while(n--){             
            scanf("%d", &x);
            if(x == 0)
                ++m;
            else
                ++j;
        }
        printf("Mary won %d times and John won %d times\n", m, j);
        
    }

}