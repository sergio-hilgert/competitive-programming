# include <bits/stdc++.h>
using namespace std;

int grafo[8][8];
int x, y, X, Y;

int main(){
    
    while(cin >> x >> y >> X >> Y){
        if(x == 0)
            break;
        
        if(x == X && y == Y){
            cout << "0" << endl;
            continue;
        }
        
        memset(grafo, 0, sizeof(grafo));
        
        for(int j = 0; j < 8; ++j)
            grafo[x-1][j] = 1;
            
        for(int i = 0; i < 8; ++i)
            grafo[i][y-1] = 1;
            
        for(int i = x-1, j = y-1; i < 8 && j < 8; ++i, ++j)
            grafo[i][j] = 1;
            
        for(int i = x-1, j = y-1; i >=0 && j >= 0; --i, --j)
            grafo[i][j] = 1;
            
        for(int i = x-1, j = y-1; i >=0 && j < 8; --i, ++j)
            grafo[i][j] = 1;
            
        for(int i = x-1, j = y-1; i < 8 && j >= 0; ++i, --j)
            grafo[i][j] = 1;
            
        if(grafo[X-1][Y-1])
            cout<< "1"<< endl;
        else
            cout<< "2"<< endl;
            
            
        }
   
    return 0;
}
