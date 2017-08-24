/*

///////>>> using next_permutation

#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 300;

typedef long long huge;

vector<char>perm;
string str;
int n;

void gen(){
  perm.clear();
  for(int i = 0; i < str.size(); ++i){
    perm.push_back(str[i]);
  }
  do{
    for(int i = 0; i < perm.size(); ++i){
      
      printf("%c", perm[i]);
    }
    printf("\n");
  }while(next_permutation(perm.begin(), perm.end()));
}

int main(){

  scanf(" %d", &n);
  for(int i = 0; i < n; ++i){
    cin >> str;
    sort(str.begin(), str.end());
    gen();
    printf("\n");
  }

  return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 300;

int n;
string str;
vector<char>perm;
bool used[maxn];

void gen(){
  if(perm.size() == str.size()){
    for(int i = 0; i < perm.size(); ++i)
      printf("%c", perm[i]);
    printf("\n");
  }else{

    bool letter[maxn];
    for(int i = 0; i < str.size(); ++i){
      letter[(int)str[i]] = false;
    }
    
    for(int i = 0; i < str.size(); ++i){
      
      if(used[i] || letter[(int)str[i]])
      	continue;
      
      used[i] = true;
      letter[(int)str[i]] = true;
      perm.push_back(str[i]);
      gen();
      used[i] = false;
      perm.pop_back();
      
    }
  }
}

int main(){
  scanf(" %d", &n);
  for(int i = 0; i < n; ++i){
    cin >> str;
    sort(str.begin(), str.end());

    perm.clear();
    for(int i = 0; i < str.size(); ++i){
      used[i] = false;
      
    }
    

    gen();
    printf("\n");
  }
  
  return 0;
}