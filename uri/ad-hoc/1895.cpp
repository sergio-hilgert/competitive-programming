# include <bits/stdc++.h>


using namespace std;

int main(){
    
    int a, b, n, limit, comeco, x ;
    
    queue <int> q;
    
    scanf("%d %d %d", &n, &comeco, &limit);
        a = 0;
        b = 0;
        while(!q.empty()) q.pop();
        while(--n){
            scanf("%d", &x);
            q.push(x);
        }
        n = q.size();
        
        for(int i = 1; i <= n; ++i){
            if(i%2 == 0){
                if(abs(q.front() - comeco) <= limit){
                    b+= abs(q.front() - comeco);
                    comeco = q.front();
                }
            }
            else if(abs(q.front() - comeco) <= limit){
                a+= abs(q.front() - comeco);
                comeco = q.front();
            }
            q.pop();
        }
        printf("%d %d\n", a, b);
    return 0;
}