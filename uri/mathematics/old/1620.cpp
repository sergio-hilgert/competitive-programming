# include <bits/stdc++.h>

using namespace std;

int main(){
    
    long double l, result, i;
    
    while(scanf("%Lf", &l) && l ){
        i = l + l - 3;
        result = (i - l)/l;
        printf("%.6Lf\n", result);
    }
    return 0;
}