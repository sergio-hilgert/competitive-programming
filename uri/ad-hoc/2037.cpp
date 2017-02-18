# include <bits/stdc++.h>

using namespace std;


    
int main(){
    
    int n, j, x;
    string str, p;
    stringstream ss;
    vector < queue<int> > v;
    queue <int> q; 
    string result;
    
    scanf("%d", &n);
    while(n != -1){
        v.clear();
        while(!q.empty()) q.pop();
        result = "";
        getchar();
        getline(cin, str);
        ss << str;
        while (ss >> p){
            for(int i = 0; i < p.size(); ++i){
                q.push(p[i] - '0');    
            }    
            v.push_back(q);
            while(!q.empty()) q.pop();
        }
        for(int i = 0; i <=n-2; ++i){
            cout<< "I: "<<i+2<< endl;
            if(!v[i].empty()){
                cout << v[i].front() << endl;
                if(v[i].front() == 1){
                    result += '0' + i+2;
                    v[i].pop();
                    i = -1;
                }else if(i+2 == v[v[i].front()-2].front()){
                    v[i].pop();
                    v[v[i].front()-2].pop();
                    i = -1;
                }
                
            }
        } 
        cout << result << endl;
        scanf("%d", &n);
    }
        
    
    return 0;
}