#include <bits/stdc++.h>

#define _CRT_SECURE_NO_DEPRECATE
#define INF INT_MAX
#define MS_INF 127 // 2b
#define MS_H_INF 63 // 1b
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define P push
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define si set<int>
#define msi map<string,int>
#define ms memset

#define MAX 70 //  <<<<<< MAXIMO
#define MAX_PESO 35000

typedef long long int 	ll;

#define rep(i, a, b) \
	for(int i = int (a); i <= int (b); ++i)
#define irep(i, a, b) \
	for(int i = int (a); i >= int (b); --i)
#define TRvi(c, it) \
	for(vi::iterator it = (c).begin(); it != (c).end(); ++it)
#define TRvii(c, it) \
	for(vii::iterator it = (c).begin(); it != (c).end(); ++it)
#define TRmsi(c, it) \
	for(msi::iterator it = (c).begin(); it != (c).end(); ++it)

using namespace std;

vi pesos, valores;
int pd[MAX][MAX_PESO];

int mochila(int index, int peso){

	if(index < 0) return 0;

	if(index == 0){
		if(pesos[index] <= peso){
			return valores[index];
		}else
			return 0;
	}

	if(pd[index][peso]) return pd[index][peso];

	int com_e, sem_e;

	if(pesos[index] <= peso){
		com_e = valores[index] + mochila(index - 1, peso - pesos[index]);
	}
	sem_e = mochila(index - 1, peso);

	return pd[index][peso] = max(com_e, sem_e);

}

int main(){
	
	int n;
	int m, qnt;
	
	scanf("%d", &n);

	while(n--){
		ms(pd, 0, sizeof pd);

		scanf("%d %d", &m, &qnt);
		while(qnt--){

		}
	}

	return 0;
}