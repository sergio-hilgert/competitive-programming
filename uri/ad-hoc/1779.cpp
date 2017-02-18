# include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, qnt, x, maior, t, f;
    vector <int> v;
    
    while(scanf("%d", &n) != EOF){
        for(int i = 1; i <= n; ++i){
            maior = -1;
            t = 0;
            f = 0;
            v.clear();
            v.push_back(1);
            scanf("%d", &qnt);
            while(qnt--){
                scanf("%d", &x);
                if(x == maior){
                    if(f){
                        v.push_back(1);
                        ++t;
                        f = 0;
                    }
                    else{
                        ++v[t];
                    }
                }else if (x > maior){
                    v.clear();
                    v.push_back(1);
                    t = 0;
                    f = 0;
                    maior = x;
                }else{
                    f = 1;
                }
                
            }
            maior = 0;
            for(int z = 0; z < v.size(); ++z){
                if(v[z] > maior)
                    maior = v[z];
            }
            printf("Caso #%d: %d\n", i, maior);
        }
        
        
    }
    
    
    return 0;
}