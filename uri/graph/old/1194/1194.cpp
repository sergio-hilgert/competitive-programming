#include <bits/stdc++.h>

using namespace std;

string prefix, infix;
int pos;

void edr(int begin, int end){
  if(begin <= end){
    int next = infix.find(prefix[pos++]);
    edr(begin, next-1);
    edr(next+1, end);
    printf("%c", infix[next]);
  }
}

int main(){

  int n, tree_size;
  scanf(" %d", &n);
  while(n--){
    cin >> tree_size >> prefix >> infix;
    pos = 0;
    edr(0, tree_size - 1);
    printf("\n");
  }


  return 0;
}
