#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;

int main(){

  map<string,string> m;
  m["brasil"]="Feliz Natal!";
  m["alemanha"]="Frohliche Weihnachten!";
  m["austria"]="Frohe Weihnacht!";
  m["coreia"]="Chuk Sung Tan!";
  m["espanha"]="Feliz Navidad!";
  m["grecia"]="Kala Christougena!";
  m["estados-unidos"]="Merry Christmas!";
  m["inglaterra"]="Merry Christmas!";
  m["australia"]="Merry Christmas!";
  m["portugal"]="Feliz Natal!";
  m["suecia"]="God Jul!";
  m["turquia"]="Mutlu Noeller";
  m["argentina"]="Feliz Navidad!";
  m["chile"]="Feliz Navidad!";
  m["mexico"]="Feliz Navidad!";
  m["antardida"]="Merry Christmas!";
  m["canada"]="Merry Christmas!";
  m["irlanda"]="Nollaig Shona Dhuit!";
  m["belgica"]="Zalig Kerstfeest!";
  m["italia"]="Buon Natale!";
  m["libia"]="Buon Natale!";
  m["siria"]="Milad Mubarak!";
  m["marrocos"]="Milad Mubarak!";
  m["japao"]="Merii Kurisumasu!";
  string str;
  while(cin >> str){
    if(m[str] != "")
      cout << m[str] << endl;
    else
      printf("--- NOT FOUND ---\n");
  }

  return 0;
}
