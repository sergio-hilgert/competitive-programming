#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

typedef long long huge;

int qnt_paineis, caminhoes, frete;
int low, high, mid, result, final_result;
int paineis[maxn];

int calc_qnt(){
  int soma = 0, cont = 1;
  result = 0;
  for(int i = 0; i < qnt_paineis; ++i){
    if(soma + paineis[i] > mid){
      ++cont;
      result = max(result, soma);
      soma = paineis[i];
    }else{
      soma += paineis[i];
    }
    if(i == qnt_paineis-1)
	result = max(result,soma);
  }
  
  return cont;
}

void binary_search(){
  low = 0;
  int qnt;
  while(low <= high){
    mid = (low + high)/2;
    qnt = calc_qnt();
    if(qnt <= caminhoes){
      high = mid - 1;
      final_result = result;
    }else{
      low = mid + 1;
    }
  }
  
}

int main(){

  int n;

  scanf(" %d", &n);

  while(n--){
    scanf(" %d %d %d", &qnt_paineis, &caminhoes, &frete);
    high = 0;
    for(int i = 0; i < qnt_paineis; ++i){
      scanf(" %d", &paineis[i]);
      high += paineis[i];
    }

    binary_search();
    //cout << "------\n";
    printf("%d $%d\n", final_result, final_result*caminhoes*frete);
  }


  return 0;
}
