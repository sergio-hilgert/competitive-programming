#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

string str, vogal, cons;
int n, m, op, qnt, cont_vogal, cont_cons;

void calc(int op, int qnt){
  if(!qnt) return;
  if(op == 1 && cons.size() != 0)
    cont_cons = (cont_cons + (cons.size() - (qnt % cons.size()))) % cons.size();
  else if (op == 0 && vogal.size() != 0){
    cont_vogal = (cont_vogal + (vogal.size() - (qnt % vogal.size()))) % vogal.size();
  }
}

void printa(){
  int pos_vogal = -1;
  int pos_cons = -1;
  //cout << vogal << " " << cont_vogal << " " << cont_cons <<endl;
  for(int i = 0; i < str.size(); ++i){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
      ++pos_vogal;
      
      if(vogal.size())
	printf("%c", vogal[(pos_vogal + cont_vogal) % vogal.size()]);
    }else{
      ++pos_cons;
      if(cons.size())
	printf("%c", cons[(pos_cons + cont_cons) % cons.size()]);
    }
  }
  printf("\n");
}

int main(){
  
  scanf(" %d", &n);
  int k = 1;
  while(n--){
    cin >> str;
    printf("Caso #%d:\n", k++);
    cont_cons = 0;
    cont_vogal = 0;
    vogal = cons = "";
    for(int i = 0; i < str.size(); ++i){
      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
	vogal += str[i];
      }else{
        cons += str[i];
      }
    }
    scanf(" %d", &m);
    while(m--){
      scanf(" %d", &op);
      if(op != 2){
	scanf(" %d", &qnt);
	calc(op, qnt);
      }else{
	printa();
      }
    }
   
  }

 
  


  return 0;
}
