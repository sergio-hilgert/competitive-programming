#include <bits/stdc++.h>

using namespace std;

int main(){

	double d, vf, vg, h;

	while(scanf("%lf %lf %lf", &d, &vf, &vg) != EOF){
		h = sqrt(12*12 + d*d);
		if((vg/h) >= (vf/12.0)){
			printf("S\n");
		}else
			printf("N\n");

	}
	return 0;
}