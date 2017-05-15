#include<bits/stdc++.h>

using namespace std;

int head[20010];
int knight[20010];

int main(){
    int heads, knights;
    
    while(true){
        scanf("%d %d",&heads, &knights);
        if(heads == 0) break;
        
        for(int i = 0; i < heads; ++i) scanf("%d",&head[i]);
        for(int i = 0; i < knights; ++i) scanf("%d",&knight[i]);
        
        int ans = 0;
        bool ok = true;
        
        sort(head,head + heads);
        sort(knight,knight + knights);
        
        for(int i = 0, j = 0; i < heads && ok; ++i){
            while(j < knights && knight[j] < head[i]) ++j;
            
            if(j == knights) ok = false;
            else ans += knight[j++];
        }
        
        if(!ok) printf("Loowater is doomed!\n");
        else printf("%d\n",ans);
    }
    
    return 0;
}