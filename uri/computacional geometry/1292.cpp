#include <bits/stdc++.h>
# define _USE_MATH_DEFINES

using namespace std;

double ladoQuadrado(double x){
	return x * (sin(M_PI*108/180)/sin(M_PI*63/180));
}

int main(){
	
	double lado;

	while(scanf("%lf", &lado) != EOF){
		printf("%.10lf\n", ladoQuadrado(lado));
	}

	return 0;
}