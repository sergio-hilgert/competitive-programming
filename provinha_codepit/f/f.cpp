#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  double v, resp;
  string n, m;

  while(1){
    resp = 0;
    scanf(" %lf", &v);
    cin >> n >> m;
    if(v == 0 && n == "0" && m == "0") break;
    
    while(n.size() < 4)
      n = '0' + n;
    while(m.size() < 4)
      m = '0' + m;
    
    if(n.substr(n.size()-4, 4) == m.substr(m.size()-4, 4)){
      resp = v * 3000;
    }else if (n.substr(n.size()-3, 3) == m.substr(m.size()-3, 3)){
      resp = v * 500;
    }else if (n.substr(n.size()-2, 2) == m.substr(m.size()-2, 2)){
      resp = v * 50;
    }else{
      int n1, n2;
      if(n.substr(n.size()-2, 2) == "00"){
	n1 = 100;
      }else
	n1 = atoi(n.substr(n.size()-2, 2).c_str());

      if(m.substr(m.size()-2, 2) == "00"){
	n2 = 100;
      }else
	n2 = atoi(m.substr(m.size()-2, 2).c_str());
      
      if(abs(n1-n2) <= 4){
	resp = v * 16;
      }
    }
    printf("%.2lf\n", resp);
    
  }

  return 0;
}
