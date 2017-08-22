#include <bits/stdc++.h>

using namespace std;

int numerosNaoRepetidos(int x){
	int y[10];
	
	memset(y , 0, sizeof y);

	if(x < 10)
		return 1;
	while(x){
		if(y[x%10])
			return 0;
		y[x%10] = 1;
		x /= 10;
	}

	return 1;

}


int main(){
	
	int n, m, cont;

	while(scanf("%d %d", &n, &m) != EOF){
		cont = 0;
		for(int i = n; i <= m; ++i){
			if(numerosNaoRepetidos(i))
				++cont;
		}
		printf("%d\n", cont);
	}
	

	return 0;
}