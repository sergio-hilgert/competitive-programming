#include <bits/stdc++.h>

using namespace std;

int dX, dY;

void quadrante(int x, int y){
	if( x == dX || y == dY)
		printf("divisa\n");
	else{
		if(x > dX && y > dY)
			printf("NE\n");
		if(x > dX && y < dY)
			printf("SE\n");
		if(x < dX && y < dY)
			printf("SO\n");
		if(x < dX && y > dY)
			printf("NO\n");
	}
}

int main(){
	
	int n, x, y;

	while(scanf("%d", &n) && n){
		scanf("%d %d", &dX, &dY);
		while(n--){
			scanf("%d %d", &x, &y);
			quadrante(x ,y);
			
		}
	}

	return 0;
}