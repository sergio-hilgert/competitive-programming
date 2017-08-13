#include <bits/stdc++.h>

using namespace std;
 
map<int, int> m;

void primeFactors(long long int n){
    while (n%2 == 0){
        m[2]++;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n % i == 0){
            m[i]++;
            n = n/i;
        }
    }
 
    if (n > 2)
        m[n]++;
}
 
int main(){
    map<int, int> :: iterator it;
    
    long long int n;
    while(scanf(" %lld", &n) != EOF){
        m.clear();
        primeFactors(n);
        int soma = 1;
        for(it = m.begin(); it != m.end(); it++){
            soma *= (it->second + 1);
        }
        
        printf("%d\n", soma);
    }
    return 0;
}