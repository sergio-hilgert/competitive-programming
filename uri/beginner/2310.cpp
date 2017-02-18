#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int s, b, a, ps, pb, pa;
	int xs, xb, xa, xps, xpb, xpa;
	string str;

	scanf("%d", &n);

	xs = xb = xa = xps = xpb = xpa = 0;
	
	while(n--){
		cin >> str;
		scanf("%d %d %d", &s, &b, &a);
		xs += s; xb += b; xa += a;
		scanf("%d %d %d", &ps, &pb, &pa);
		xps += ps; xpb += pb; xpa += pa;
	}
	printf("Pontos de Saque: %.2f %%.\n", (double)xps/xs * 100);
	printf("Pontos de Bloqueio: %.2f %%.\n", (double)xpb/xb * 100);
	printf("Pontos de Ataque: %.2f %%.\n", (double)xpa/xa * 100.0);

	return 0;
}