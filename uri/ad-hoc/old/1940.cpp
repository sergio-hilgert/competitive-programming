#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, r, x, y, maior, index;
	int numero[510];

	scanf("%d %d", &n, &r);
	x = 0;
	memset(numero, 0 , sizeof numero);
	maior = 0;
	for(int i = 0; i < r*n; ++i){
		if(i % n == 0)
			x = 0;
		scanf("%d", &y);
		numero[x] += y;
		if(numero[x] >= maior){
			maior = numero[x];
			index = x;
		}
		++x;
	}
	cout << index + 1 << endl;

	return 0;
}