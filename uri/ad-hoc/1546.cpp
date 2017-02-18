# include <bits/stdc++.h>

using namespace std;

int main (){
    
    
    int n;
    int x, y;
    vector<string> v;
    
    v.push_back("Rolien");
    v.push_back("Naej");
    v.push_back("Elehcim");
    v.push_back("Odranoel");
    
    while(scanf("%d", &n) != EOF){
        while(n--){
            scanf("%d", &x);
            while(x--){
                scanf("%d", &y);
                cout << v[y-1]<< endl;
            }
        }
    }
}