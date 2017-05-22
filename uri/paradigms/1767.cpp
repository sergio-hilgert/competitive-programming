#include<bits/stdc++.h>

using namespace std;

const int maxn = 110;
const int maxpeso = 50;

int valores[maxn], pesos[maxn], pd[maxn][maxpeso];
int n, pac, qnt_pacotes, pesos_pacotes;

int mochila(int index, int peso){
	if (index < 0) return 0;
	
	if(index == 0)
		if(pesos[index] <= peso)
			return valores[index];
		else
			return 0;
	
	if(pd[index][peso]) return pd[index][peso];
	
	int com_elemento = 0, sem_elemento = 0;
	
	if(pesos[index] <= peso){
		com_elemento = valores[index] + mochila(index - 1, peso - pesos[index]);
		qnt_pacotes++;
	}
	sem_elemento = mochila(index - 1, peso);
	
	return pd[index][peso] = max(com_elemento, sem_elemento);
		
}

int main(){
	
	
	scanf(" %d", &n);
	
	while(n--){
		qnt_pacotes = 0;
		memset(pd, 0, sizeof pd);
		scanf(" %d", &pac);
		for(int i = 0; i < pac; ++i){
			scanf(" %d %d", &valores[i], &pesos[i]);
		}
		int result = mochila(pac - 1, maxpeso);
		cout << result << " " << qnt_pacotes << endl;
	}
	
	
	return 0;
}