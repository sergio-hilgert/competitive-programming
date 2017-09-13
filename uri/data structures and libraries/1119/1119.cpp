#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 0;

typedef long long huge;


int n, k, m, h, a;
vector<string> v;

int main(){
  while(scanf(" %d %d %d", &n, &k ,&m) && (n || k || m)){
    v.clear();
    for(int i = 1; i <= n; ++i){
      if(i < 10)
	v.push_back("  " + to_string(i));
      else
	v.push_back(" " + to_string(i));
    }
    h = -1;
    a = n;
    bool first = true;
    while(v.size() > 0){
      h = (h + k) % v.size();
      a = (a + (v.size() - ( m % v.size()))) %v.size();
      if(h != a){
	if(first)
	  cout << v[h]  << v[a];
	else
	  cout << "," << v[h] << v[a];
	v.erase(v.begin()+h);
	if(h < a)
	  v.erase(v.begin()+(a + v.size()-1)%v.size());
	else
	  v.erase(v.begin()+a);
      }else{
	if(first)
	  cout << v[h];
	else
	  cout << "," << v[h];
	
	v.erase(v.begin() + h);
      }
      if(v.size() == 0) break;

      if(h > a)
	h = (h + v.size()-2) % v.size(); 
      else if(h < a){
	h = (h + v.size()-1) % v.size();
	a = (a + v.size()-1) % v.size();
      }else
	h = (h + v.size()-1) % v.size();
      
      first = false;
    }
    cout << endl;
  }


  return 0;
}
