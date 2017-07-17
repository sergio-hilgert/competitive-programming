#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a, b;
	
	scanf("%lf %lf", &a, &b);
	a = (a+b) /2.0;
	if(a == 10.0){
		printf("APROVADO COM DISTINCAO\n");
	}else if (a >= 7){
		printf("APROVADO\n");
	}else{
		printf("REPROVADO\n");
	}
	
	return 0;
}