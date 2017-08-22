#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x;
	int qnt[2010];
	memset(qnt, 0 , sizeof qnt);

	scanf("%d", &n);

	while(n--){
		scanf("%d", &x);
		++qnt[x];
	}

	for(int i = 0; i < 2010; ++i){
		if(qnt[i])
			printf("%d aparece %d vez(es)\n", i, qnt[i]);
	}

	return 0;
}