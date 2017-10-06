#include<bits/stdc++.h>

using namespace std;


const int input_size = 6;
int input[6] = {1, 7, 15, 29, 11, 9};

int main(){
  /*
    i = 0
    j = 1
  */
  int left_sum = 0, right_sum;

  for(int i = 0; i < input_size-1; ++i){
    right_sum = 0;
    left_sum += input[i];
    for(int j = i+1; j < input_size; ++j){
      right_sum += input[j];
      
    }
    if(left_sum*(input_size-i+1) == right_sum*(i+1)){
        for(int k = 0; k <= i; ++k)
          printf("%d ", input[k]);
        printf("\n");
        for(int k = i+1; k < input_size; ++k)
          printf("%d ", input[k]);
      }
  }




  return 0;
}