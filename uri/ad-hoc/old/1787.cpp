# include <bits/stdc++.h>
# define pii pair<int,string>

using namespace std;

bool isPowerOfTwo(unsigned long int x){
    return (x > 1 && ((x & (~x + 1)) == x));
}

long long int maior(long int u, long int r, long int i){
    long long int resp = (u + r + abs(u-r))/2;
    resp = (resp + i + abs(resp - i))/2;
    return resp;
}

int main(){
    long int U, R, I, Maior;
    int n, i;
    map <string, int> m;
    string str;
    
    scanf("%d", &n);
    while(n){
        m["Uilton"] = 0;
        m["Rita"] = 0;
        m["Ingred"] = 0;
        Maior = 0;
        i = 0;
        
        while(n--){
            cin>> U>> R>> I;
            Maior = maior(U,R,I); 
            
            if(isPowerOfTwo(U)){
                if(Maior == U){
                    m["Uilton"] += 2;
                }else
                    ++m["Uilton"];
            }
            
            if(isPowerOfTwo(R)){
                if(Maior == R){
                    m["Rita"] += 2;
                }else
                    ++m["Rita"];
            }
            
            if(isPowerOfTwo(I)){
                if(Maior == I){
                    m["Ingred"] += 2;
                }else
                    ++m["Ingred"];
            }
            
        }
        Maior = maior(m["Ingred"], m["Rita"], m["Uilton"]);
        if(Maior == m["Ingred"]){
            ++i;
            str = "Ingred";
        }
            
        if (Maior == m["Rita"]){
            ++i;
            str = "Rita";
        }
        
        if (Maior == m["Uilton"]){
            ++i;
            str = "Uilton";
        }
        
        if(i > 1){
            printf("URI\n");
        }else
            cout<< str<< endl;
            
        scanf("%d", &n);
    }
    
    return 0;
}