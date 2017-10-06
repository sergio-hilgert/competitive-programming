#include <bits/stdc++.h>

using namespace std;

int main(){

  int input = 90;

  for(int i = 0; i*i <= input; ++i){
    for(int j = 0; j*j <= input; ++j){
      if(i*i + j*j == input)
        printf("%d %d", i, j);
    }
  }


  return 0;
}