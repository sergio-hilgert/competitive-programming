# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    double l, b, iv, ev;
    string str;
    
    while(scanf("%d", &n) != EOF){
        for(int i = 1; i <= n; ++i){
            cin>> str>> l;
            cout<< "Caso #"<< i<<": "<< str<<" nivel "<< l<< endl;
            cin>> b>> iv>> ev;
            printf("HP: %d\n",(int)((iv + b + sqrt(ev)/8 + 50)*l)/50 + 10);
            cin>> b>> iv>> ev;
            printf("AT: %d\n",(int)((iv + b + sqrt(ev)/8)*l)/50 + 5);
            cin>> b>> iv>> ev;
            printf("DF: %d\n",(int)((iv + b + sqrt(ev)/8)*l)/50 + 5);
            cin>> b>> iv>> ev;
            printf("SP: %d\n",(int)((iv + b + sqrt(ev)/8)*l)/50 + 5);
            
        }
        
    }
    
    return 0;
}