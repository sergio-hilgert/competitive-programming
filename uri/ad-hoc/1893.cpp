# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF){
        
        if(a >= b){
            if(b >= 3 && b <= 96)
                printf("minguante\n");
            else if (b <= 2){
                printf("nova\n");
            }else
                printf("cheia\n");
        }else { 
            if(b >= 3 && b <= 96)
                printf("crescente\n");
            else if (b <= 2){
                printf("nova\n");
            }else
                printf("cheia\n");
        }
    }
}