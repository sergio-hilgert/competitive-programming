#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, matriz[110][110], resp, totalLinha, flag, flag1;

	while(scanf("%d %d", &n, &m) && (m || n)){
		memset(matriz, 0, sizeof matriz);
		resp = 4;
		flag = 0;
		flag1 = 0;
		for(int i = 0; i < n; ++i){
			totalLinha = 0;
			for(int j = 0; j < m; ++j){
				scanf("%d", &matriz[i][j]);
				totalLinha += matriz[i][j];
			}
			if(totalLinha == m && !flag1){
				flag1 = 1;
				resp--;
			}

			if(!totalLinha && !flag){
				resp--;
				flag = 1;
			}

		}

		flag = 0;
		flag1 = 0;
		for(int j = 0; j < m; ++j){
			totalLinha = 0;
			for(int i = 0; i < n; ++i){
				totalLinha += matriz[i][j];
			}
			if(!totalLinha && !flag){
				resp--;
				flag = 1;
			}
			if(totalLinha == n && !flag1){
				resp--;
				flag1 = 1;
			}
		}

		cout << resp << endl;
	}

	return 0;
}