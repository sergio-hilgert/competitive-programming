# include <bits/stdc++.h>

using namespace std;

int main(){
    
    map <string, string> tradutor;
    string p, j;
    long int t, n, m;
    
    scanf("%ld", &t);
    getchar();
    
    while(t--){
        cin>> n>> m;
        cin.clear();
        cin.ignore();
        tradutor.clear();
        
        while(n--){
            getline(cin, j);
            getline(cin, p);
            if(p.compare("") == 0)
                tradutor[j] = j;
            else
                tradutor[j] = p;
            
        }
        
        j = "";
        p = "";
        
      
        while(m--){
            getline(cin, j);
            if(j.compare("") == 0){
                continue;
            }
            stringstream ss (j);
            while(ss >> p){
                if(tradutor.find(p) != tradutor.end()){
                    if(ss.rdbuf()->in_avail() == 0)
                        cout<< tradutor[p]<< endl;
                    else
                        cout<< tradutor[p]<< " ";
                }else{
                    if(ss.rdbuf()->in_avail() == 0)
                        cout<< p<< endl;
                    else
                        cout<< p<< " ";
                }
            }
        }
        
        cout<< endl;
    }
    
}