# include <bits/stdc++.h>
# define PI 3.141592654

using namespace std;

int main(){

	double a, b, c;

	while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
		printf("%.2lf\n", (b*tan(a*PI/180)+c)*5);

	}

	return 0;
}