#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    string str;
    scanf("%d", &n);
    
    while(n--){
        cin >> str;
        if(str != "Batmain")
            printf("Y\n");
        else
            printf("N\n");
    }
    
    return 0;
}