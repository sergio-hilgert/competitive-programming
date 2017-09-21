#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1010;

typedef long long huge;

char year[maxn];

int main(){

  int mod_100, mod_4, mod_15, mod_55, mod_400;
  bool k = false;
  while(scanf(" %s", year) != EOF){
    mod_4 = mod_100 = mod_15 = mod_55 = mod_400 = 0;
    if(k)
      printf("\n");
    for(int i = 0; i <  strlen(year); ++i){
      mod_4 = (mod_4 * 10 + year[i] - '0')%4;
      mod_100 = (mod_100 * 10 + year[i] - '0')%100;
      mod_15 = (mod_15 * 10 + year[i] - '0')%15;
      mod_55 = (mod_55 * 10 + year[i] - '0')%55;
      mod_400 = (mod_400 * 10 + year[i] - '0')%400;
      
    }
    //cout << mod_4 << " " << mod_100 << " " << mod_400 << endl;
    if((mod_4 == 0 && mod_100 != 0) || mod_400 == 0){
      printf("This is leap year.\n");
      if(mod_15 == 0)
	printf("This is huluculu festival year.\n");
      if(mod_55 == 0)
	printf("This is bulukulu festival year.\n");
    }else if(mod_15 == 0){
	printf("This is huluculu festival year.\n");
    }else{
      printf("This is an ordinary year.\n");
    }
    k = true;
  }
  


  return 0;
}
