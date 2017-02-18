# include <bits/stdc++.h>

using namespace std;

int main(){
    
   long unsigned a, b, resp;
   
   a = 0;
   b = 0;
   resp = 0;
   
   while(scanf("%lu %lu", &a, &b) != EOF){
       resp = a ^ b;
       printf("%lu\n", resp);
       
   }
   
   return 0;
    
    
}