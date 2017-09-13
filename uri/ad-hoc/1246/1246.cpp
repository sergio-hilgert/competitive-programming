#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1010;
typedef long long huge;

set<pair<int, int> > e;
pair<int, int> cars[maxn];
int n, m, result;

void insert(int plate, int value){
  if(e.size() != 0){
    for(auto &&u: e){
      if((u.second - u.first) + 1 >= value){
	cars[plate] = make_pair(u.first, u.first + value-1);
	if(u.first + value > u.second){
	  e.erase(u);
	}else{
	  e.erase(u);
	  e.insert(make_pair(u.first+value, u.second));
	}
	result += 10;
	
	//cout << "car: " << cars[plate].first << " " << cars[plate].second << endl;
      }
    }
  }
}

void merge(){
  cout << " entrou" << endl;
  cout << e.size() << endl;
  set<pair<int, int> > :: iterator nx;
  for(set<pair<int, int> > :: iterator it = e.begin(); it != e.end(); ++it){
    cout << "x" << endl;
    nx = next(it, 1);
    if(nx == e.end()) break;
    cout << "next: "<<nx->first << nx->second << endl;
    cout << "previuous: "<< it->first <<it->second << endl;
    // if((it+1)->first - it->second == 1){
    //   cout << 
    // }
  }
  //return true;
}

 void remove(int plate){
   e.insert(cars[plate]);
   //while(merge());
   merge();
 }

int main(){

  char c;
  int p, v;
  while(scanf(" %d %d", &n, &m) != EOF){
    e.clear();
    e.insert(make_pair(0, n-1));
    result = 0;
    while(m--){
      scanf(" %c %d", &c, &p);
      if(c == 'C'){
	scanf(" %d", &v);
	insert(p, v);
      }else{
	//merge();
	remove(p);
      }
      //for(auto &&u: e){
      //	cout << u.first << " " << u.second << endl;
      // }
    }
    printf("%d\n", result);
  }
  


  return 0;
}
