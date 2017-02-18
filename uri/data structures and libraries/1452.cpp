# include <bits/stdc++.h>

using namespace std;

vector <string> retornaVect(string s){
    vector <string> v;
    string palavra;
    stringstream ss;
    
    ss.clear();
    v.clear();
    ss << s;
    while(ss >> palavra) v.push_back(palavra);
    
    return v;
    
}


int main(){
    
    string str;
    int n, m, qnt, i, j, z;
    long int total = 0;
    hash_map < int, vector <string> > servers;
    hash_map < int, vector <string> > users;
    hash_map <int, vector <int> > connections;
    
    
    while(true){
        servers.clear();
        users.clear();
        connections.clear();
        total = 0;
        scanf("%d %d", &n, &m);
        getchar();
        if(n == 0 && m == 0) break;
        
        for(i = 0; i < n; ++i){
            scanf("%d", &qnt);
            getchar();
            getline(cin, str);
            servers[i] = retornaVect(str);
            
        }
        for(i = 0; i < m; ++i){
            scanf("%d", &qnt);
            getchar();
            getline(cin, str);
            users[i] = retornaVect(str);
            for(j = 0; j < users[i].size(); ++j){
                for(z = 0; z < n; ++z)
                    if(find(servers[z].begin(), servers[z].end(), users[i][j]) != servers[z].end()){
                        if(connections.find(i) != connections.end()){
                            if(find(connections[i].begin(), connections[i].end(), z) == connections[i].end()){
                                connections[i].push_back(z); 
                                ++total;
                            }
                        }else{
                            connections[i].push_back(z);
                            ++total;
                        }
                        
                    }
            }
            
            
            
        }
        cout<< total<< endl;
    }

}