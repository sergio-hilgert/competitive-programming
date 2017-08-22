# include <bits/stdc++.h>

using namespace std;

int main(){
    
    string str;
    long long result;
    
    while(cin>> str){
        if(str == "0") break;
        result = 1;
        for(int i = str.size(); i >= 2; --i){
            result *= i;
        }
        cout << result << endl;
    }
    
    return 0;
}