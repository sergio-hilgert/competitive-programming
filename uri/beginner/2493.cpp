#include <bits/stdc++.h>

using namespace std;

bool ok(int x, int y, int z, char c){
    if(c == '+'){
        return (x + y) == z;
    }
    
    if(c == '-'){
        return (x - y) == z;
    }
    
    if(c == '*'){
        return (x * y) == z;
    }
    
    if(c == 'I'){
        return (x + y) != z && (x * y) != z && (x - y) != z;
    }
}

int main(){
    
    int n, x;
    int expressions[60][4];
    char c;
    string str;
    
    vector<string> v;
    
    while(scanf("%d", &n) != EOF){
        v.clear();
        memset(expressions, 0, sizeof expressions);
        
        for(int i = 0; i < n; ++i){
            scanf("%d %d=%d", &expressions[i][0], &expressions[i][1], &expressions[i][2]);
        }
        for(int i = 0; i < n; ++i){
            cin >> str >> x >> c;
            --x;
            if(!ok(expressions[x][0], expressions[x][1], expressions[x][2], c)){
                v.push_back(str);
            }
            
        }
        if(v.size() == 0){
            printf("You Shall All Pass!\n");
            continue;
        }
        
        if(v.size() == n){
            printf("None Shall Pass!\n");
        
            continue;
        }
        
        sort(v.begin(), v.end());
        
        int k = 1;
        for(int i = 0; i < v.size(); ++i){
            if(k){
                cout << v[i];
                k = 0;
            }else{
                cout << " " << v[i];
            }
        }
        
        printf("\n");
        
    }
    
    
    return 0;
}