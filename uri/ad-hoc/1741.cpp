# include <bits/stdc++.h> 
using namespace std;

stack <char> s;
string str;

string func(int i){
    if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
        if(!s.empty() && s.top() < 48 || s.top() > 57){
            return "Invalid expression.\n";
        }else if(!s.empty() && s.top() == '/' && str[i] == '0'){
            s.push(str[i]);
        }
    }
    
    
}

int main(){
    
    while(getline(cin, str)){
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        cout << str<< endl;
    }
    
    return 0;
}