#include <bits/stdc++.h>

using namespace std;

char infix[310];
char postfix[310];
map<char, int> peso;
stack<char> s;

int isValid(char &c){
  if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z') || c >= '0' && c <= '9')
    return 1;
  return 0;
}

void infix_to_postfix(){
  int infix_leght = strlen(infix);
  int j = 0;
  char op;
  for(int i = 0; i < infix_leght; ++i){
    if(isValid(infix[i]))
      postfix[j++] = infix[i];
    else if(!s.empty()){
      op = infix[i];
      if(op != '(' && op != ')'){
        while(!s.empty() && peso[s.top()] >= peso[op]){
          postfix[j++] = s.top();
          s.pop();
        }
        s.push(op);  
      }else{
        if(op == '(')
          s.push(op);
        else{
          while(!s.empty() && s.top() != '('){
            postfix[j++] = s.top();
            s.pop();
          }
          s.pop();
        }
      }
    }else{
      s.push(infix[i]);
    }
  }
  while(!s.empty()){
    postfix[j++] = s.top();
    s.pop();
  }
  postfix[j] = '\0';
}

int main(){
  
  int n;
  scanf("%d", &n);
  peso['('] = 0;
  peso['+'] = 1;
  peso['-'] = 1;
  peso['*'] = 2;
  peso['/'] = 2;
  peso['^'] = 3;
  
  while(n--){
    scanf("%s", infix);
    infix_to_postfix();
    printf("%s\n", postfix);
    
  }
    
  return 0;
}