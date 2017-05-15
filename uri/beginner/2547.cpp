#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, c, x, contador;
	
	while(scanf(" %d %d %d", &a, &b, &c) != EOF){
		contador = 0;
		while(a--){
			scanf("%d", &x);
			if(x >= b && x <= c)
				++contador;
		}
		printf("%d\n", contador);
		
	}
	
	
	return 0;
}