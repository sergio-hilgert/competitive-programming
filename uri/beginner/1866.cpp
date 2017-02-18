# include <bits/stdc++.h>

using namespace std;

int main (){

    int n, x;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);
        if(x%2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }
}
