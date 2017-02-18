#include <stdio.h>
#include <stdlib.h>
void Insercao (int n, int v[]) {
    int i, j, k, x;
    for (j = 1; /*A*/ j < n; j++) {
        for (k = 0; k < n; k++) 
          printf("%d", v[k]);
        putchar('\n');
        x = v[j];
        for (i = j-1; i >= 0 && v[i] > x; i--)
            v[i+1] = v[i];
        v[i+1] = x;
    }
}
int main (void){
    int i;
    //int v [10] = {7, 4, 3, 9, 0, 8, 5, 2, 6, 1};
    int v [10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    Insercao (10, v);
    for (i = 0; i < 10; i++)
        printf ("%d", v[i]);
    putchar('\n');
    system ("pause");
}
