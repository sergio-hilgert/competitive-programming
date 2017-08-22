#include<bits/stdc++.h>

using namespace std;

long int rafel(int x, int y){
	long int result;
	result = (3*x)*(3*x) + y*y;
	return result;
}
long int beto(int x, int y){
	long int result;
	result = 2*(x*x) + (5*y)*(5*y);
	return result;
}
long int carlos(int x, int y){
	long int result;
	result = -100*x + y*y*y;
	return result;
}

int main(){
	int n;
	int x, y;
	long long int r,b,c, result;
	while(scanf("%d",&n) != EOF){
		while(n--){
			scanf("%d %d", &x, &y);
			r = rafel(x,y);
			b = beto(x,y);
			c = carlos(x,y);
			result = (r + b + abs(r-b))/2;
			result = (result + c + abs(result-c))/2;
			if(result == r)
				printf("Rafael ganhou\n");
			if(result == b)
				printf("Beto ganhou\n");
			if(result == c)
				printf("Carlos ganhou\n");
		}
	}
	return 0;
}