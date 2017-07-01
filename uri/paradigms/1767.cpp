#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;
const int maxw = 50;

int pd[maxn][maxw + 1];
int pacs[maxn][maxw + 1];
int value[maxn];
int weight[maxn];

int tc, n;

int main(){
	
	scanf(" %d", &tc);
	while(tc--){
		scanf(" %d", &n);
		for(int i = 0; i < n; ++i){
			scanf(" %d %d", &value[i], &weight[i]);
		}
		for(int i = 0; i <= n; ++i){
			for(int j = 0; j <= maxw; ++j){
				if(i == 0 || j == 0){
					pd[i][j] = 0;
					pacs[i][j] = 0;
				} else if(weight[i - 1] <= j && value[i - 1] + pd[i - 1][j - weight[i - 1]] > pd[i - 1][j]){
					pd[i][j] = value[i - 1] + pd[i - 1][j - weight[i - 1]];
					pacs[i][j] = 1 + pacs[i - 1][j - weight[i - 1]];
				}else{
					pd[i][j] = pd[i - 1][j];
					pacs[i][j] = pacs[i- 1][j];
				}
			}
		}
		
		int w;
		for(int j = 0; j <= maxw; ++j){
			if(pd[n][j] == pd[n][maxw]){
				w = j;
				break;
			}
		}
		
		printf("%d brinquedos\n", pd[n][maxw]);
		printf("Peso: %d kg\n", w);
		printf("sobra(m) %d pacote(s)\n\n", n-pacs[n][maxw]);
	}
	return 0;
}