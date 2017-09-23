#include<bits/stdc++.h>

using namespace std;

const int maxn = 30;

string str;
string perm;
bool chosen[maxn];



void generate_permutations(){
  if(perm.size() == str.size()){
    cout << perm << endl;
  }else{
    bool letters[maxn];
    
    for(int i = 0; i < 30; ++i)
      letters[i] = false;
    
    for(int i = 0; i < str[i]; ++i){
      if(chosen[i] || letters[str[i]-'a'])
	continue;

      perm += str[i];
      chosen[i] = true;
      letters[str[i]-'a'] = true;
      generate_permutations();
      perm.pop_back();
      chosen[i] = false;
    }
  }
}


int main(){


  int n;
  scanf(" %d", &n);

  while(n--){
    cin >> str;
    sort(str.begin(), str.end());
    generate_permutations();
    printf("\n");
  }

  return 0;
}
