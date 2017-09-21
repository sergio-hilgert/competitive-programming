#include <bits/stdc++.h>

using namespace std;

void eRetangulo(int a, int b, int c){
	if((a*a + b*b) == (c*c))
		printf("Retangulo: S\n");
	else
		printf("Retangulo: N\n");
}

int main(){
	
	int triangle[3];	

	scanf("%d %d %d", &triangle[0], &triangle[1], &triangle[2]);

	sort(triangle, triangle + 3);

	if(triangle[0] + triangle[1] <= triangle[2]){
		printf("Invalido\n");
	}else{
		if(triangle[0] == triangle[1] && triangle[1] == triangle[2]){
			printf("Valido-Equilatero\n");
			eRetangulo(triangle[0], triangle[1], triangle[2]);
			return 0;
		}

		if(triangle[0] == triangle[1] || triangle[1] == triangle[2]){
			printf("Valido-Isoceles\n");
			eRetangulo(triangle[0], triangle[1], triangle[2]);
			return 0;
		}

		printf("Valido-Escaleno\n");
		eRetangulo(triangle[0], triangle[1], triangle[2]);
	}

	return 0;
}