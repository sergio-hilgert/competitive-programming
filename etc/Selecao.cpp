#include <stdio.h>
#include <stdlib.h>

void Selecao (int n, int v[]) {
    int i, j, k, min, x;
    for (i = 0; /*A*/ i < n-1; i++) {
        for (k = 0; k < n; k++) 
          printf("%d", v[k]);
        putchar('\n');
        min = i;
        for (j = i+1; j < n; j++)
            if (v[j] < v[min]) min = j;
        x = v[i]; v[i] = v[min]; v[min] = x;
    }
}
int main(void){
    int i;
    int v[10]={7, 4, 3, 9, 0, 8, 5, 2, 6, 1};
    Selecao (10, v);
    for (i = 0; i < 10; i++) 
      printf ("%d", v[i]);
    putchar('\n');
    system ("pause");
}
