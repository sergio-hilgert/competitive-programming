# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    
    int x, sim, nao;
    
    scanf("%d", &n);
    sim = 0;
    nao = 0;
    while(n--){
        scanf("%d", &x);
        if(!x)
            ++sim;
        else 
            ++nao;
    }
    
    if(sim > nao)
        printf("Y\n");
    else
        printf("N\n");
    
    return 0;
}