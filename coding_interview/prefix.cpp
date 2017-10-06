#include <bits/stdc++.h>

using namespace std;

vector<string> input;

bool is_not_prefix(string prefix, string actual_string){
  int min_size;
  for(int i = 0; i < input.size(); ++i){
    if(input[i] == actual_string) continue;
    min_size = min(input[i].size(), prefix.size());
    if(prefix.substr(0, min_size) == input[i].substr(0, min_size))
      return false;
  }
  return true;
}

int main(){

  
  string helper;
  input.push_back("zebra");
  input.push_back("dog");
  input.push_back("duck");
  input.push_back("dove");

  for(int i = 0; i < input.size(); ++i){
    helper = "";
    for(int j = 0; j < input[i].size(); ++j){
      helper += input[i][j];
      if(is_not_prefix(helper, input[i])){
        cout << helper << endl;
        break;
      }
    }
  }


  return 0;
}