#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a, b, c, raio_menor, raio_maior, perimetro, p, area_triangulo, area_circ_maior, area_circ_menor;
	
	while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
		perimetro = a + b + c;
		p = perimetro/2.0;
		
		area_triangulo = sqrt(p*(p-a)*(p-b)*(p-c));
		
		raio_maior = (a*b*c)/sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
		raio_menor = 2*area_triangulo/perimetro;
		
		area_circ_maior = M_PI*raio_maior*raio_maior;
		area_circ_menor = M_PI*raio_menor*raio_menor;
		
		area_circ_maior -= area_triangulo;
		area_triangulo -= area_circ_menor;
		
		printf("%.4lf %.4lf %.4lf\n", area_circ_maior, area_triangulo, area_circ_menor);	
	}
	
	return 0;
}