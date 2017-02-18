# include <bits/stdc++.h>

using namespace std;

int n;
string infix;
string posfix;
stack <char> sc;
map <char, int> prioridades;

int isOK(char i){
    if((i >= 65 && i <= 90) || (i >= 97 && i <= 122) || (i >= 48 && i <= 57))
        return 1;
    return 0;
}

int isOp(char i){
    if(i == 42 || i == 45 || i == 43 || i == 47 || i == 94)
        return 1;
    return 0;
}

void ixToPx(){
    
    for(int j = 0; j < infix.size(); ++j){
        if(isOK(infix[j]))
            posfix += infix[j];
            
        else if (isOp(infix[j])){
            while(!sc.empty() && sc.top() != '(' && prioridades[infix[j]] <= prioridades[sc.top()]){
                posfix += sc.top();
                sc.pop();
            }
            sc.push(infix[j]);
            
        }else if(infix[j] == '('){
            sc.push(infix[j]);
            
        }else if(infix[j] == ')'){
            while(!sc.empty() && sc.top() != '('){
                posfix += sc.top();
                sc.pop();
            }
            sc.pop();
        }
    }
    while(!sc.empty()){
        posfix += sc.top();
        sc.pop();
    }
}



int main(){
    
    prioridades['+'] = 1;
    prioridades['-'] = 1;
    prioridades['*'] = 2;
    prioridades['/'] = 2;
    prioridades['^'] = 3;
    
    while(scanf("%d", &n) != EOF){
        while(!sc.empty()){
            sc.pop();
        }
        posfix = "";
        cin>> infix;
        ixToPx();
        cout << posfix<< endl;
    }
    
    
    return 0;
}