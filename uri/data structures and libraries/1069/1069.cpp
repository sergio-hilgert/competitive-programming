#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  int n, cont;
  string str;
  stack<char> s;
  
  scanf(" %d", &n);

  while(n--){
    cin >> str;
    cont = 0;
    while(!s.empty()) s.pop();
    for(int i = 0; i < str.size(); ++i){
      if(str[i] == '>'){
	if(!s.empty()){
	  s.pop();
	  ++cont;
	}
      }else if(str[i] == '<')
	s.push('<');
    }
    printf("%d\n", cont);
  }
  


  return 0;
}
