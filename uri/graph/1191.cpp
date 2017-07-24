#include <bits/stdc++.h>

using namespace std;

string prefix, infix;
int pos;

void edr(int i, int j){
  if(i <= j){
    int next = infix.find(prefix[pos++]);
    edr(i, next-1);
    edr(next+1, j);
    printf("%c", infix[next]);
  }
}

int main(){
    
    
  while(cin >> prefix >> infix){
    pos = 0;
    edr(0, prefix.size()-1);
    printf("\n");
  }
    
    
  return 0;
}