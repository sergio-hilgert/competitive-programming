#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int not_equals_chars(string &str1, string &str2){
  int result = 0;
  for(int i = 0; i < str1.size(); ++i){
    if(str1[i] == str2[i])
      result++;
    else
      break;
  }
  return result;
}

int main(){
  vector<string> v;
  int cont, n;
  string str;
  
  while(scanf(" %d", &n) != EOF){
    v.clear();
    cont = 0;
    while(n--){
      cin >> str;
      v.push_back(str);
    }
    sort(v.begin(), v.end());

    for(int i = 1; i < v.size(); ++i){
      cont += not_equals_chars(v[i-1], v[i]);
    }
    printf("%d\n", cont);
  }
 
  return 0;
}
