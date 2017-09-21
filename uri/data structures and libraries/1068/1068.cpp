#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  string str;
  stack<char> s;
  bool correct;
  
  while(cin >> str){
    while(!s.empty()) s.pop();
    correct = true;
    for(int i = 0; i < str.size(); ++i){
      if(str[i] == ')'){
	if(!s.empty())
	  s.pop();
	else{
	  correct = false;
	  break;
	}  
      }else if(str[i] == '(')
	s.push('(');
    }
    if(!s.empty() || !correct)
      printf("incorrect\n");
    else
      printf("correct\n");
  }
  


  return 0;
}
