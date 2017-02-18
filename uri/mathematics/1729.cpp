# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, t, H, M , S;
    string str;
    double total;
    char c;
    double d;
    vector <int> h;
    vector <int> m;
    vector <int> s;
    
    scanf("%d %lf", &n, &d);
    while(scanf("%d", &t) != EOF){
        total = 0;
        h.clear();m.clear();s.clear();
        for(int j = 0; j < n; ++j){
            cin>> c;
            if(c == 45){
                getline(cin, str);
                total = -1;
                break;
            }
            H = c - '0';
            h.push_back(H);
            scanf(":%d:%d", &M, &S);
            m.push_back(M);
            s.push_back(S);
            
            
            
        }
        if(total == -1){
            printf("%3d: -\n", t);
        }else{
            for(int i = 0; i < h.size(); ++i){
                total += h[i]*60*60;
                total += m[i]*60;
                total += s[i];
            }
            
            total = (total/d) + 0.5;
            printf("%3d: %d:%02d min/km\n", t, (int)(total/60), (int)(total)%60);
        }
    }
    
    return 0;
}