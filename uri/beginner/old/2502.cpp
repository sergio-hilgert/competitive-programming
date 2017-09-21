#include<bits/stdc++.h> 
using namespace std;

map<char, char> m;

void mountMap(string str1, string str2){
  for(int i = 0; i < str1.size(); ++i){
    m[str2[i]] = str1[i];
    m[str1[i]] = str2[i];
  }
}

char isIn(char c){
  return m.find(c) == m.end() ? c : m[c];
}

char isInM(char c){
  char C = 'A' + c - 'a';
  if(m.find(C) == m.end()){
    return c;
  }else{
    if(m[C] >= 'A' && m[C] <= 'Z')
      return ((char)('a' + m[C] - 'A'));
    return m[C];
  }
}

char isInX(char c){
  if(m.find(c) == m.end())
    return c;
  if(m[c] >= 'A' && m[c] <= 'Z')
    return ((char)('a' + m[c] - 'A'));
}

char getChar(char c){
  if(c >= 'A' && c <= 'Z')
    return isIn(c);
    
  if(c >= 'a' && c <= 'z')
    return isInM(c);
  
  return isInX(c);
}

int main(){
  
  int n, n2;
  string str1, str2;
  
  while(scanf(" %d %d", &n, &n2) != EOF){
    m.clear();
    getchar();
    getline(cin, str1);
    getline(cin, str2);
    
    mountMap(str1, str2);
    
    str1 = "";
    while(n2--){
      getline(cin, str1);
      for(int i = 0; i < str1.size(); ++i){
        printf("%c", getChar(str1[i]));
      }
      printf("\n");
    }
    printf("\n");
    
  }
  
  
  
  return 0;
}