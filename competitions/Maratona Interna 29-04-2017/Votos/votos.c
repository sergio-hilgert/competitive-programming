#include<stdio.h>

const int maxn = 100000;
int arr[maxn];

int main(){
  int t, n, cur, cur_index;
  scanf("%d", &t);

  while(t--){
    scanf("%d", &n);
    for(int i = 0; i<n; ++i)
      scanf("%d", &arr[i]);

    for(int j = 0; j<3; ++j){
      cur = 0;
      for(int i = 0; i<n; ++i)
        if(cur < arr[i])
          cur = arr[i], cur_index = i;
      arr[cur_index] = 0;
      j ? printf(" %d", cur) : printf("%d", cur);
    }

    printf("\n");
  }
}
