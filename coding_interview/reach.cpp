#include<bits/stdc++.h>

using namespace std;

int main(){
  
  vector<int> x, y;

  x.push_back(0);y.push_back(0);
  x.push_back(1);y.push_back(1);
  x.push_back(1);y.push_back(2);

  if(x.size() <= 1)
    return 0;

  int total = 0;
  int actual_x = x[0], actual_y = y[0], larger_x, larger_y;

  for(int i = 1; i < x.size(); ++i){
    
    if(actual_x < 0 && x[i] < 0){
      larger_x = abs((actual_x*-1)-(x[i]*-1));
    }else if(actual_x >= 0 && x[i] >=0){
      larger_x = abs(actual_x-x[i]);
    }else{
      if(actual_x < 0)
        larger_x = actual_x*(-1) + x[i];
      else
        larger_x = actual_x + x[i]*(-1);
    }

    if(actual_y < 0 && y[i] < 0){
      larger_y = abs((actual_y*-1)-(y[i]*-1));
    }else if(actual_y >= 0 && y[i] >=0){
      larger_y = abs(actual_y-y[i]);
    }else{
      if(actual_y < 0)
        larger_y = actual_y*(-1) + y[i];
      else
        larger_y = actual_y + y[i]*(-1);
    }

    total += max(larger_x, larger_y);

    actual_y = y[i];
    actual_x = x[i];
  }
  printf("%d\n", total);

  return 0;
}