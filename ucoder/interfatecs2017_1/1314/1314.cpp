#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1010;

typedef long long huge;

struct equipe{
  int id;
  int fatec;
  int ac;
  int tempo;

  equipe(int i, int f, int a, int t) : id(i), fatec(f), ac(a), tempo(t) {}

  bool operator < (const equipe &o) const{
    return ac > o.ac || (ac == o.ac && tempo < o.tempo);
  }
};

bool fatecs[maxn];
vector<equipe> equipes;
vector<int> result;

int main(){

  int v, f, q;
  int u, e, a, t;
  
  scanf(" %d %d %d", &v, &f, &q);

  while(q--){
    scanf(" %d %d %d %d", &u, &e, &a, &t);
    equipes.push_back(equipe(e, u, a, t));
  }

  sort(equipes.begin(), equipes.end());

  for(int i = 0; i < equipes.size() && v; ++i){
    if(!fatecs[equipes[i].fatec]){
      fatecs[equipes[i].fatec] = true;
      --v;
      result.push_back(equipes[i].id);
      equipes[i].id = -1;
    }
  }
  for(int i = 0; i < equipes.size() && v; ++i){
    if(equipes[i].id != -1){
      result.push_back(equipes[i].id);
      --v;
    }
  }
  sort(result.begin(), result.end());
  int k = 0;
  for(int i = 0; i < result.size(); ++i){
    if(k)
      printf(", %d", result[i]);
    else{
      k = 1;
      printf("%d", result[i]); 
    }
  }
  printf(".\n");
  // for(int i = 0; i < equipes.size(); ++i){
  //   printf("id: %d\nfatec: %d\nac: %d\ntempo: %d\n", equipes[i].id, equipes[i].fatec, equipes[i].ac, equipes[i].tempo);
  // }


  return 0;
}
