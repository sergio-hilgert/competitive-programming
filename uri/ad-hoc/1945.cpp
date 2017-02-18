# include <bits/stdc++.h>

using namespace std;

map <string, string> m;
stack <string> sstr;
string str, nome;
int soma;


void somaN(string stry){
    stringstream ss;
    ss << stry;
    string p;
    while(ss >> p){
        if (p[0] != 43){
            if(p[0] >= 48 && p[0] <= 57)
                soma += atoi(p.c_str());
            else
                somaN(m[p]);    
        }
    }
    
}

int main (){
    
    
    while(getline(cin, str)){
        nome = str.substr(0, str.find(":")-1);
        m[nome] = str.substr(str.find("=")+2);
        sstr.push(nome);
     
    }
    
    somaN(sstr.top());
    cout<< soma<< endl;
   
    return 0;
}