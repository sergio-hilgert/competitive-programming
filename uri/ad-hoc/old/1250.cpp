# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int s, n, cont;
    char c;
    int pos[60];
    
    scanf("%d", &n);
    
    while(n--){
        cont = 0;
        memset(pos, 0, sizeof(pos));
        scanf("%d", &s);
        for(int i = 0; i < s; ++i)
            scanf("%d", &pos[i]);
        for(int i = 0; i < s; ++i){
            cin>> c;
            if((c == 'S' && pos[i] <= 2) || c == 'J' && pos[i] > 2)
                ++cont;
            
        }
        printf("%d\n", cont);
        
    }
    
    
    return 0;
}