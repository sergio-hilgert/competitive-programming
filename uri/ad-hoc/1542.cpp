# include <bits/stdc++.h>

using namespace std;

int main(){
    
    double q, p ,d;
    double pag;
    
    scanf("%lf %lf %lf", &q, &d, &p);
    while(q){
        pag = (p*d)/abs(q-p);
        pag *= q;
        if ((int)pag == 1)
            printf("%d pagina\n",(int) pag);
        else
            printf("%d paginas\n",(int) pag);
        
        scanf("%lf %lf %lf", &q, &d, &p);
        
    }
    
    
    return 0;
}