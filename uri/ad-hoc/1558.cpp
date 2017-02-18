#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

typedef long long int huge;
const int inf = 0x3f3f3f3f;
const int maxn = 10100;
bool da_certo[maxn];

int main() {
  int n;
  for(int i=0; i<maxn; ++i)
    da_certo[i] = false;
  for(int i=0; i*i<maxn; ++i) {
    for(int j=0; i*i+j*j<maxn; ++j) {
      da_certo[i*i+j*j]=true;
    }
  }
  while(1) {
    if (scanf(" %d", &n)!=1) {
      break;
    }
    if (n>=0) {
      printf(da_certo[n]?"YES\n":"NO\n");
    }
    else
      printf("NO\n");
  }
  return 0;
}