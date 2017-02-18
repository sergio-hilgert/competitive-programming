# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, v, m;
    pair <int, int> p1, p2;
    
    while(scanf("%d", &n) != EOF){
        while(n--){
            scanf("%d x %d", &v, &m);
            p1 = make_pair(v,m);
            scanf("%d x %d", &v, &m);
            p2 = make_pair(v,m);
            m = 0; v = 0;
            if(p1.first > p1.second){
                v += 3;
            }else if (p1.first < p1.second){
                m += 3;
            }else{
                v += 1;
                m += 1;
            }
            if(p2.first > p2.second){
                m += 3;
            }else if (p2.first < p2.second){
                v += 3;
            }else{
                v += 1;
                m += 1;
            }
            if(v != m){
                printf("Time %d\n", v > m ? 1: 2);
            }else if(p1.first + p2.second > p2.first + p1.second){
                printf("Time 1\n");
            }else if(p1.first + p2.second < p2.first + p1.second){
                printf ("Time 2\n");
            }else{
                if(p1.second > p2.second){
                    printf("Time 2\n");
                }else if(p1.second < p2.second){
                    printf("Time 1\n");
                }else
                    printf("Penaltis\n");
            }
        }
        
        
    }
    
    
    return 0;
}