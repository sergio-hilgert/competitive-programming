#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

bool cmp(const string &str1, const string &str2){
  return str1.size() > str2.size();
}

int main(){
  int n;

  vector<string> v;
  scanf(" %d", &n);
  getchar();
  stringstream ss;
  string word, str;
  
  while(n--){
    v.clear();
    getline(cin, str);
    ss.clear();
    ss.str("");
    ss << str;
    while(ss >> word){
      v.push_back(word);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); ++i){
      if(!i)
	cout << v[i];
      else
	cout << " " << v[i];
    }
    printf("\n");
  }
  


  return 0;
}
