# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int h1, m1, h2, m2, start, end, result;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    while(h1 || m1 || h2 || m2){
        start = h1*60 + m1;
        end = h2*60 + m2;
        result = end - start;
        if(result < 0)
            result += 1440;
        printf("%d\n", result);
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        
    }
    
    
    return 0;
}