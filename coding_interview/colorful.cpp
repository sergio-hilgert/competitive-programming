#include <bits/stdc++.h>

using namespace std;

vector<string> substrings;

void generate_substrings(string str){
  string substring = "";
  for(int i = 0; i < str.size(); ++i){
    substring = str[i];
    substrings.push_back(substring);
    for(int j = i+1; j < str.size(); ++j){
      substring += str[j];
      substrings.push_back(substring);
    }
  }
}

int main(){

  int input = 12;
  stringstream ss;
  ss.clear();
  ss << input;
  string str = ss.str();
  generate_substrings(str);
  set<int> my_set;
  int result;
  bool ok = true;
  for(int i = 0; i < substrings.size(); ++i){
    result = 1;
    for(int j = 0; j < substrings[i].size(); ++j){
      result *= (substrings[i][j] - '0');
    }
    if(!my_set.insert(result).second){
      ok = false;
      break;
    }
  }
  cout << ok << endl;


  return 0;
}