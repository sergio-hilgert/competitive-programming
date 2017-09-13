#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){
  string str1, str2;
  int soma1, soma2;
  while(cin >> str1 >> str2 && (str1 != "0" || str2 != "0")){
    while(str1.size() > 1){
      soma1 = 0;
      for(int i = 0; i < str1.size(); ++i){
	soma1 += str1[i] - '0';
      }
      str1 = to_string(soma1);
    }
    while(str2.size() > 1){
      soma2 = 0;
      for(int i = 0; i < str2.size(); ++i){
	soma2 += str2[i] - '0';
      }
      str2 = to_string(soma2);
    }
    if(str1[0] - '0' > str2[0] - '0'){
      printf("1\n");
    }else if(str1[0] - '0' < str2[0] - '0'){
      printf("2\n");
    }else{
      printf("0\n");
    }
  }
  


  return 0;
}
