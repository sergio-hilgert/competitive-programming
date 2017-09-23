#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  string str, temp, result;
  bool start = false;
  while(cin >> str){
    result = "";
    temp = "";
    for(int i = 0; i < str.size(); ++i){
      if(str[i] == '['){
	if(start){
	  result = temp + result;
	  temp = "";
	}
	start = true;
	continue;
      }
      if(str[i] == ']'){
	if(start){
	  result = temp + result;
	  temp = "";
	}
	start = false;
	continue;
      }
      if(start){
	temp += str[i];
      }else{
	result += str[i];
      }
    }
    if(temp.size() > 0)
      result = temp + result;
    cout << result << endl;
  }


  return 0;
}
