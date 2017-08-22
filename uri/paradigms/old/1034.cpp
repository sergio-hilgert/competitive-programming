#include<bits/stdc++.h>
#define INF 1 << 30
using namespace std;

int n, numero_moedas, troco, moedas[30];

int minCoin(){
	int dp[troco+1];
	dp[0] = 0;
	for(int j = 1; j <= troco; ++j){
		dp[j] = INF;
		for(int i = 0; i < numero_moedas; ++i ){
			if(j >= moedas[i] && 1 + dp[j - moedas[i]] < dp[j]){
				dp[j] = 1 + dp[j-moedas[i]];
			}
		}
	}
	return dp[troco];
}

int main(){
	
	scanf(" %d", &n);
	while(n--){
		scanf(" %d %d", &numero_moedas, &troco);
		for(int i = 0; i < numero_moedas; ++i){
			scanf(" %d", &moedas[i]);
		}
		printf("%d\n", minCoin());
	}
	
	return 0;
}