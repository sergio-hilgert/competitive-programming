#include <bits/stdc++.h>

using namespace std;

const int maxn = 60;
const int maxpeso = 100;

int pesos[maxn], valores[maxn], pd[maxn][maxpeso];

int mochila(int index, int peso){
	if(index < 0) return 0;
	
	if(index == 0){
		if(pesos[index] <= peso)
			return valores[index];
		else
			return 0;
	}
	
	if(pd[index][peso] != 0) return pd[index][peso];
	
	int com_elemento = 0, sem_elemento = 0;
	
	if(pesos[index] <= peso)
		com_elemento = valores[index] + mochila(index - 1, peso - pesos[index]);
		
	sem_elemento = mochila(index - 1, peso);
		
	return pd[index][peso] = max(com_elemento, sem_elemento);
}

int main(){
	
	int n, m, resistencia, maxpeso, result;
	
	scanf(" %d", &n);
	
	while(n--){
		scanf(" %d", &m);
		memset(pd, 0, sizeof pd);
		for(int i = 0; i < m; ++i){
			scanf(" %d %d", &valores[i], &pesos[i]);
			
		}
		scanf(" %d", &maxpeso);
		scanf(" %d", &resistencia);
		result = mochila(m -1, maxpeso);
	
		if(result >= resistencia)
			printf("Missao completada com sucesso\n");
		else
			printf("Falha na missao\n");
	}
	
	
	return 0;
}