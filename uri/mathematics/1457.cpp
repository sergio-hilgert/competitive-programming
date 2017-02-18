#include <bits/stdc++.h>

using namespace std;

long long int fatDoidao(int n, int i){
	if(n <= 1)
		return 1;
	return n * fatDoidao(n-i, i);
}

int main(){
	
	int n, i, x;
	char c;

	while(scanf("%d", &n) != EOF){
		while(n--){
			scanf("%d", &x);
			for(i = 0; scanf("%c", &c) != EOF && c == '!'; ++i);
			printf("%lld\n", fatDoidao(x, i));
		}
	}

	return 0;
}