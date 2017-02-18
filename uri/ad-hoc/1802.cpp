# include <bits/stdc++.h>
# define pii pair <int,int>
using namespace std;

vector <int> v[5];
vector <int> v2;
int visitados[10][20];
queue <int> q[5];

bool sorting(const pair<int,int> &i, const pair<int,int> &j){
    return i.first > j.first;
}

long unsigned concatenate(long unsigned x, long unsigned y) {
    long unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
}


int main(){
    
    int n, x, t, menor, I;
    long int soma, k;
    soma = 0;
    memset(visitados, 0, sizeof(visitados));
    
    for(t = 0; t < 5; ++t){
        scanf("%d", &n);
        v.clear();
        for(int i = 0; i < n; ++i){
            scanf("%d", &x);
            v[t].push_back(x);
        }
    
        sort(v[t].begin(), v[t].end(), greater <int>());
        
    }
    
    scanf("%ld", &k);
    
    for(int i = 0; i < 5; ++i) {
        v2.push_back(v[i][0];
        soma += v2[i];
    }
    
    while(--k){
        menor = 9999;
        for(int i = 0; i < 5; ++i){
            int y = v[i].size();
            for(int j = 0; j < y; ++j){
                if(!visitados[i][j] && abs(v[i][j] - q[i].front()) < menor){
                I = i;
                menor = abs(v[i] - q[i].front());
                }
            }
            
        }
        cout << soma<< endl; 
        v[I] = q[I].front();
        if(!q[I].empty()) q[I].pop();
        for(int i = 0; i < 5; ++i) {
            soma += v[i];
        }
        
        for(int i = 0; i < 5; ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    cout<< soma<< endl;
    return 0;
}