# include <bits/stdc++.h>

using namespace std;

int main(){
    
    double v, d;
    
    while(cin>> v>> d){
        d = d/2.0;
        v = v / (3.14*d*d);
        printf("ALTURA = %.2f\nAREA = %.2f\n", v, 3.14*d*d);
        
    }
    
    
    return 0;
}