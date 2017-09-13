#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

typedef long long huge;

double marcados[maxn];
int vitoria[maxn];
double recebidos[maxn];
// avage, marcados, inscr
vector<pair<int, pair<double, pair< int, int> > > > v;

int main(){
  int n, k = 1;
  int x, y, m_x, m_y;
  
  while(scanf(" %d", &n) && n){
    memset(recebidos, 0, sizeof recebidos);
    memset(marcados, 0, sizeof marcados);
    memset(vitoria, 0, sizeof vitoria);
    v.clear();
    if(k > 1)
      printf("\n");
    for(int i = 0; i < (n*(n-1))/2; ++i){
      scanf(" %d %d %d %d", &x, &m_x, &y, &m_y);
      if(m_x > m_y){
	vitoria[x] += 2;
	vitoria[y]++;
      }else{
	vitoria[y] += 2;
	vitoria[x]++;
      }
      marcados[x] += m_x;
      marcados[y] += m_y;
      recebidos[x] += m_y;
      recebidos[y] += m_x;
      //cout << i << endl;
    }
    for(int i = 1; i <= n; ++i){
      if(recebidos[i] == 0)
	v.push_back(make_pair(-vitoria[i], make_pair(-marcados[i], make_pair(-marcados[i], i))));
      else
	v.push_back(make_pair(-vitoria[i], make_pair(-(marcados[i]/recebidos[i]), make_pair(-marcados[i],i))));
    }
    sort(v.begin(), v.end());
    printf("Instancia %d\n", k++);
    for(int i = 0; i < n; ++i){
      // cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
      
      
      if(i == 0)
      	printf("%d", v[i].second.second.second);
      else
      	printf(" %d", v[i].second.second.second);
    }
    printf("\n");
  }
  


  return 0;
}
