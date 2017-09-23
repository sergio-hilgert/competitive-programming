#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  char c;
  string str = "";
  set<string> s;

  while(scanf("%c", &c) != EOF){
    if(isalpha(c)){
      str += tolower(c);
    }else{
      if(str.size() > 0)
	s.insert(str);
      str = "";
    }
  }
  for(set<string>::iterator it = s.begin(); it != s.end(); ++it){
    cout << *it << endl;
  }


  return 0;
}
