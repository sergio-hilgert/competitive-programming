#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;


// <peso, <idade, <altura, nome> > > 
vector<pair<int, pair<int, pair<double, string> > > > wow;

int main(){
  int n, peso, idade, total, m, k = 0;
  double altura;
  string nome;
  scanf(" %d", &n);
  
  while(n--){
    wow.clear();
    printf("CENARIO {%d}\n", ++k);
    scanf(" %d %d", &m, &total);
    while(m--){
      cin >> nome;
      scanf(" %d %d %lf", &peso, &idade, &altura);
      wow.push_back(make_pair(-peso, make_pair(idade, make_pair(altura, nome))));
    }
    sort(wow.begin(), wow.end());
    for(int i = 0; i < total; ++i){
      cout << i+1 << " - " << wow[i].second.second.second << endl;
    }
  }
  


  return 0;
}
