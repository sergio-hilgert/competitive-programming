#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double p[3], minimo;
	
	scanf("%lf %lf %lf", &p[0], &p[1], &p[2]);
	
	minimo = min(p[0], min(p[1], p[2]));
	
	for(int i = 0; i < 3; ++i){
		if(minimo == p[i])
			printf("%d\n", i+1);
	}
	
	return 0;
}