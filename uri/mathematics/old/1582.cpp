# include <bits/stdc++.h>

using namespace std;

vector <int> v;

int gdc(int a, int b, int c){
    while(a % b != 0){
        if(a < b) swap (a,b);
        a = a % b;
    }
    
    while(b % c != 0){
        if(b < c) swap (b,c);
         b = b % c;
    }
    return c;
}


int main(){
    
    int a, b, c;
    
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        v.clear();
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        if((v[2]*v[2]) == (v[1]*v[1]) + (v[0]*v[0])){
            if(gdc(a,b,c) == 1){
                printf("tripla pitagorica primitiva\n");
            }else
                printf("tripla pitagorica\n");
        
        }else
            printf("tripla\n");
    }
    
    return 0;
}