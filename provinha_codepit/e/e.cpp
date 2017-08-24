#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 100010;
const int max_plagio = 10010;

typedef long long huge;

unordered_map<char, int> m;
int notas[maxn];
int plagio[max_plagio];
int lps[max_plagio]; // longest prefix sufix
bool worked;
int n, M;

void create_lps(){
  int len = 0, i = 1;
  
  memset(lps, 0, sizeof lps);

  while(i < M){
    if(plagio[i] == plagio[len]){
      ++len;
      lps[i] = len;
      ++i;
    }else{
      if(len != 0){
	len = lps[len-1];
	
      }else{
	lps[i++] = 0;
      }
    }
  }
}

void kmp(int x){
  create_lps();
  int i = 0, j = 0;
  while(i < n){
    if((plagio[j]+x)%12 == notas[i]){
      ++i;
      ++j;
    }
    if(j == M){
      worked = true;
      j = lps[j-1];
      break;
    }else if (i < n && (plagio[j]+x)%12 != notas[i]){
      if(j != 0){
	j = lps[j-1];
      }else{
	++i;
        
      }
    }
  }
}

int main(){

  m['C']= 0; m['D'] = 2; m['E'] = 4; m['F'] = 5; m['G'] = 7; m['A'] = 9; m['B'] = 11;
  
  string str;
  while(scanf(" %d %d", &n, &M) && (n || M)){
    worked = false;
    for(int i = 0; i < n; ++i){
      cin >> str;
      if(str.size() == 1)
	notas[i] = m[str[0]];
      else{
	if(str[1] == '#'){
	  notas[i] = (m[str[0]] + 1)%12;
	}else{
	  notas[i] = (m[str[0]] + (12-1))%12;
	}
      }
    }
    for(int i = 0; i < M; ++i){
      cin >> str;
      if(str.size() == 1)
	plagio[i] = m[str[0]];
      else{
	if(str[1] == '#'){
	  plagio[i] = (m[str[0]] + 1)%12;
	}else{
	  plagio[i] = (m[str[0]] + (12-1))%12;
	}
      }
    }
    for(int i = 0; i <= 12; ++i){
      kmp(i);
    }
    if(worked)
      printf("S\n");
    else
      printf("N\n");
  }
  


  return 0;
}
