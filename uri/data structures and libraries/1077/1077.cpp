#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

map<char, int> priority;

bool is_operator(char c){
  return c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '(' || c == ')';
}

string convert_to_postfix(string &str){
  string postfix = "";
  stack<char> s;
  for(int i = 0; i < str.size(); ++i){
    if(!is_operator(str[i])){
      postfix += str[i];
    }else{
      if(str[i] == '('){
	s.push(str[i]);
      }else if(str[i] == ')'){
	while(s.top() != '('){
	  postfix += s.top();
	  s.pop();
	}
	s.pop();
      }else{
	if(!s.empty()){
	  if(priority[s.top()] < priority[str[i]]){
	    s.push(str[i]);
	  }else{
	    while(!s.empty() && priority[s.top()] >= priority[str[i]]){
	      postfix += s.top();
	      s.pop();
	    }
	    s.push(str[i]);
	  }
	}else{
	  s.push(str[i]);
	}
      }
    }
  }
  while(!s.empty()){
    postfix += s.top();
    s.pop();
  }
  return postfix;
}

int main(){

  int n;
  string str;
 
  priority['+'] = 1;
  priority['-'] = 1;
  priority['*'] = 2;
  priority['/'] = 2;
  priority['^'] = 3;
  
  scanf(" %d", &n);
  
  while(n--){
    cin >> str;
    cout << convert_to_postfix(str) << endl;
  }


  return 0;
}
