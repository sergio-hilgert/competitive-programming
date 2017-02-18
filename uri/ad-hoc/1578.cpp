# include <bits/stdc++.h>

using namespace std;

int sizeINT(unsigned long long int i){
    int c = 0;
    do{
        ++c;
        i /= 10;
    }while(i);
    return c;
}


int main(){
    
    unsigned long long m[30][30];
    memset(m, 0LL, sizeof(m));
    
    int n;
    int x;
    unsigned long long y, maior;
    vector <unsigned long long> v;
    while(scanf("%d", &n) != EOF){
        for(int p = 0; p < n; ++p){
            v.clear();
            scanf("%d", &x);
            printf("Quadrado da matriz #%d:\n", p+4);
            for(int i = 0; i < x; ++i)
                for(int j = 0; j < x; ++j){
                    scanf("%lld", &y);
                    m[i][j] = y;
                }
                
            for(int j = 0; j < x; ++j){
                maior = 0;
                for(int i = 0; i < x; ++i){
                    if(m[i][j] > maior)
                        maior = m[i][j];
                }
                v.push_back(maior*maior);
            }
            
            for(int i = 0; i < x; ++i){
                for(int j = 0; j < x; ++j){
                    if(j == x-1)
                        cout << right << setw(sizeINT(v[j])) << m[i][j]*m[i][j]<< endl;
                    else
                        cout << right << setw(sizeINT(v[j])) << m[i][j]*m[i][j]<< " ";
                    
                }
            }
            if(p != n-1)
            cout << endl;
            
        }
    }
    
    
    return 0;
}