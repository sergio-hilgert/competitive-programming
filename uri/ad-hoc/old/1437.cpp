# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, i;
    char posicao[4];
    char c;
    scanf("%d", &n);
    
    posicao[0] = 'N';
    posicao[1] = 'L';
    posicao[2] = 'S';
    posicao[3] = 'O';
    
    while(n){
        i = 0;
        while(n--){
            cin>> c;
            if(c == 'D'){
                i = (i+1) % 4;
            }
            if(c == 'E'){
                i = (i+3) % 4;
            }
        }
        cout << posicao[i]<<endl;
        scanf("%d", &n);
    }
    
    
    return 0;
}