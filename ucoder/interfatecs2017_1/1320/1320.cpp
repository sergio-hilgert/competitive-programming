#include <bits/stdc++.h>

using namespace std;
typedef long long huge;

const int inf = 0x3f3f3f3f;
const int max_pallet = 410;
const int max_container = 60;

int pallet_container[max_pallet];
int container_size[max_container];
vector<int> porto [max_container];

int main(){

  string str;
  getline(cin, str);
  stringstream ss;
  ss.clear();
  ss.str("");
  string numero;
  ss << str;
  memset(container_size, 0, sizeof container_size);
  int x, pallet_id = 1;
  while(ss >> numero){
    x = atoi(numero.c_str());
    for(int i = 1; i <= max_container; ++i){
      if(container_size[i] + x <= 8){
	container_size[i] += x;
	porto[i].push_back(pallet_id);
	pallet_container[pallet_id] = i;
	break;
      }
    }
    ++pallet_id;
  }
  vector <int> container;
  while(scanf(" %d", &x) != EOF){
    printf("Pallet %d Container %d ", x, pallet_container[x]);
    container = porto[pallet_container[x]];
    if(container[container.size()-1] == x)
      printf("TOPO\n");
    else{
      printf("Retirar");
      for(int i = container.size()-1; i >= 0; --i){
	if(container[i] == x) break;
	printf(" %d", container[i]);
      }
      printf("\n");
    }
  }


  return 0;
}
