# include <bits/stdc++.h>

using namespace std;

vector <int> tempo, pesos;
int tempoPeso[20][30];

int mochila(int index, int peso){
	if(index < 0) return 0;

	if(index == 0){
		if (pesos[index] <= peso)
			return tempo[index];
		return 0;
	}

	if(tempoPeso[index][peso])
		return tempoPeso[index][peso];
	int ce = 0, se = 0;

	if(pesos[index] <= peso){
		ce = mochila(index - 1, peso - pesos[index]) + tempo[index];
	}
	se = mochila(index - 1, peso);

	return tempoPeso[index][peso] = max(ce, se);


}

int main(){

	int n, p, a, b;

	while(scanf("%d", &n) && n){
		tempo.clear();
		pesos.clear();
		memset(tempoPeso, 0, sizeof tempoPeso);
		scanf("%d", &p);
		while(n--){
			scanf("%d %d", &a, &b);
			tempo.push_back(a);
			pesos.push_back(b);
		}

		printf("%d min.\n", mochila(tempo.size()-1, p));

	}


	return 0;
}