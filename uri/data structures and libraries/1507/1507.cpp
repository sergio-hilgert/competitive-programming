#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

bool is_sub(string str1, string str2){
  int j = 0;
  for(int i = 0; i < str1.size() && j < str2.size(); ++i){
    if(str1[i] == str2[j])
      ++j;
  }
  return j == str2.size();
}

int main(){
  int n, m;

  scanf(" %d", &n);
  string str1, str2;
  
  while(n--){
    cin >> str1;
    scanf(" %d", &m);
    while(m--){
      cin >> str2;
      if(is_sub(str1, str2))
	printf("Yes\n");
      else
	printf("No\n");
    }
  }
  


  return 0;
}
