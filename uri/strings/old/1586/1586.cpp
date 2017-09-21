#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 100010;

typedef long long huge;

string names[maxn];
huge sums[maxn]; 
int n;
huge s1, s2;


void calc_sum(int i){
  sums[i] = 0;
  for(int j = 0; j < names[i].size(); ++j)
    sums[i] += names[i][j];
}

huge crazy_sum(int begin, int end, bool first){
  huge result = 0;
  if(first){
    for(int i = end, k = 1; i >= begin; --i, ++k){
      result += (long long)(sums[i] * k);
    }
  }else{
    for(int i = begin, k = 1; i <= end; ++i, ++k){
      result += (long long)(sums[i] * k);
    }
  }
  
  return result;
}

string binary_search_x(){
  int low = 0, high = n-1;
  int mid;
  s1 = s2 = 0;
  while(low <= high){
    mid = (low + high)/2;
    s1 = crazy_sum(0, mid, true);
    s2 = crazy_sum(mid+1, n-1, false);
    if(s1 == s2){
      return names[mid];
    }else if(s1 < s2){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return "Impossibilidade de empate.";
}

int main(){
  
  while(scanf(" %d", &n) && n){
    for(int i = 0; i < n; ++i){
      cin >> names[i];
      calc_sum(i);
    }
    cout << binary_search_x() << endl;
  }
 
  return 0;
}
