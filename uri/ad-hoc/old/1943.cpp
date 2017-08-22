# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    if(n == 1)
        printf("Top 1\n");
    
    if(n > 1 && n < 4)
        printf("Top 3\n");
    
    if(n > 3 && n < 6)
        printf("Top 5\n");
        
    if(n > 5 && n < 11)
        printf("Top 10\n");
        
    if(n > 10 && n < 26)
        printf("Top 25\n");
        
    if(n > 25 && n < 51)
        printf("Top 50\n");
        
    if(n > 50 && n < 101)
        printf("Top 100\n");
        
    return 0;
}