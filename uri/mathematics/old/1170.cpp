# include <bits/stdc++.h>

using namespace std;

int main(){

	int n, dias;
	double x;

	while(scanf("%d", &n) != EOF){
		while(n--){
			dias = 0;
			scanf("%lf", &x);
			while(x > 1){
				x /= 2;
				++dias;
			}
			printf("%d dias\n", dias);

		}
		
	}

	return 0;
}