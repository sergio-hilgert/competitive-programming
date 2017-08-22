# include <bits/stdc++.h>

using namespace std;

long long unsigned fat(int n){
    long long unsigned f = 1;
    while(n > 1){
        f *= n--;
    }
    return f;
}

int main(){
    
    int n, m;
    long long fn, fm;
    while(cin>> m >> n){
        cout<< fat(m)+ fat(n)<< endl;
        
        
    }
    
    return 0;
}