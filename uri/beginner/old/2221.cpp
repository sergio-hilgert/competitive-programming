#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int bonus;
	int a1, b1, c1;
	int a2, b2, c2;
	int resp1, resp2;

	while(scanf("%d", &n) != EOF){
		while(n--){
			scanf("%d", &bonus);
			scanf("%d %d %d", &a1, &b1, &c1);
			scanf("%d %d %d", &a2, &b2, &c2);
			
			resp1 = (a1 + b1)/2;
			if(c1 % 2 == 0){
				resp1 += bonus;
			}
			
			resp2 = (a2 + b2)/2;
			
			if(c2 % 2 == 0){
				resp2 += bonus;
			} 

			cout << (resp1 > resp2 ? "Dabriel" : resp2 > resp1 ? "Guarte" : "Empate" ) << endl;
			
		}

	}

	return 0;
}