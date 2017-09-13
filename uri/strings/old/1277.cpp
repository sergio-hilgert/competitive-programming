#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m, total, presense, k;
	string students[110];
	string present[110];
	double calc;
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &m);

		k = 0;
		for(int i = 0; i < m; ++i){
			cin >> students[i];
		}
		for(int i = 0; i < m; ++i){
			cin >> present[i];
		}
		for(int i = 0; i < m; ++i){
			total = 0;
			presense = 0;
			for(int j = 0; j < present[i].size(); ++j){
				if(present[i][j] == 'M') continue;
				if(present[i][j] == 'P')
					++presense;
				++total;
			}
			calc = (double) (presense * 100)/total; 
			if(calc < 75){
				if(k)
					printf(" ");
				cout << students[i];
				k = 1;
			}
		}
		printf ("\n");
	}
	
	return 0;
}