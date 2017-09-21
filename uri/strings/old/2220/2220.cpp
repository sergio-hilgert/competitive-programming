#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

string str1, str2, str1_re;
bool contem[300];

string multiply_string(int n){
  string result = "";
  for(int i = 0; i < str2.size(); ++i){
    for(int j = 0; j < n; ++j){
      result += str2[i];
    }
  }
  return result;
}


bool is_subsequence(string str){
  int j = 0;
  for(int i = 0; i < str1_re.size() && j < str.size(); ++i){
    if(str[j] == str1_re[i])
      ++j;
  }
  return j == str.size();
}

int binary_search(){
  if(str1_re.size() < str2.size() || !str2.size() || !str1_re.size()) return 0;
  int low = 1, high = str1_re.size()/str2.size(), mid;
  string str;
  int last = 0;
  while(low <= high){
    mid = (low + high)/2;
    str = multiply_string(mid);
    // cout << low << " " << high << endl;
    //cout << mid << " " <<str << endl;
    if(is_subsequence(str)){
      last = mid;
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return last;
}

int main(){

  int n;

  scanf(" %d", &n);

  while(n--){
    memset(contem, 0, sizeof contem);
    cin >> str1;
    cin >> str2;
    for(int i = 0; i < str2.size(); ++i){
      contem[(int)str2[i]] = true;
    }
    str1_re = "";
    for(int i = 0; i < str1.size(); ++i){
      if(contem[(int)str1[i]])
	str1_re += str1[i]; 
    }
    printf("%d\n", binary_search());
    
  }
  
  return 0;
}
