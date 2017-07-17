#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double salario;
	
	scanf("%lf", &salario);
	
	if(salario <= 280.99){
		printf("%.2lf\n", salario);
		printf("20%%\n");
		printf("%.2lf\n", salario * 0.2);
		printf("%.2lf\n", salario * 1.2);
	}else if( salario <= 700.99){
		printf("%.2lf\n", salario);
		printf("15%%\n");
		printf("%.2lf\n", salario * 0.15);
		printf("%.2lf\n", salario * 1.15);
	}else if( salario <= 1500.99){
		printf("%.2lf\n", salario);
		printf("10%%\n");
		printf("%.2lf\n", salario * 0.1);
		printf("%.2lf\n", salario * 1.1);
	}else{
		printf("%.2lf\n", salario);
		printf("5%%\n");
		printf("%.2lf\n", salario * 0.05);
		printf("%.2lf\n", salario * 1.05);
	}
	
	return 0;
}