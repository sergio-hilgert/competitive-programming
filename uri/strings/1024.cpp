# include <bits/stdc++.h>

using namespace std;

int main(){
    
    long int n;
    cin >> n;
    getchar();
    string linha;
    
    while(n--){
        getline(cin, linha);
        reverse(linha.begin(), linha.end());
        for(int i = 0; i < linha.size(); ++i){
            if((linha[i] >= 65 && linha[i] <= 90) || (linha[i] >= 97 && linha[i] <=122)){
                linha[i] += 3;
            }
            if(i >= linha.size()/2)
                linha[i] -= 1;
        }
        cout << linha<< endl;
        
    }
    
    
    return 0;
}