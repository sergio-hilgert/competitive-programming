# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, x;
    map <string, int> m;
    string str;
    
    while(scanf("%d", &n) != EOF){
        m["EPR"] = 0;
        m["EHD"] = 0;
        m["INTRUSOS"] = 0;
        
        while(n--){
            cin>> x>>str;
            if(m.find(str) != m.end()){
                ++m[str];
            }else{
                ++m["INTRUSOS"];
            }
        }
        
        cout<< "EPR: "<< m["EPR"]<< endl;
        cout<< "EHD: "<< m["EHD"]<< endl;
        cout<< "INTRUSOS: "<< m["INTRUSOS"]<< endl;
        
    }
    
    
    return 0;
}