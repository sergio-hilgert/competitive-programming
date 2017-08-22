# include <bits/stdc++.h>

using namespace std;
vector <int> v;

void f(int x){
    if(x >= v.size())
        return;
    if(v[x] == x+1){
        if(x == 0){
            v[x] = 0;
            f(x+1);
        }else{
            v[x] = 0;
            for(int i = x-1; i >= 0; --i){
                v[i] += 1;
            }
            f(0);
        }
    }else{
        f(x+1);
    }
    
    
    
}

int main(){
    
    
    
    int n, x, c;
    
    scanf("%d", &n);
    
    while(n != -1){
        v.clear();
        c = 0;
        while(n--){
            scanf("%d", &x);
            v.push_back(x);
        }
        if(v[v.size()-1] != v.size() && v[v.size()-1] != 0){
            printf("N\n");
            scanf("%d", &n);
            continue;
        }
        
        f(0);
        
        for(int i = 0; i < v.size(); ++i){
            if(v[i] != 0)
                ++c;
        }

        if(!c)
            cout<< "S"<< endl;
        else
            cout<< "N"<< endl;
        
        
        scanf("%d", &n);
    }
    
    return 0;
}