#include <bits/stdc++.h>

using namespace std;
int m;

bool cmp(int a, int b){
	if(a%m == b%m){ // modulos iguais
		if(abs(a)%2 != 0 && abs(b)%2 != 0){ // se os dois forem impar ordena pelo maior
			return a > b;
		}
		if(abs(a)%2 == 0 && abs(b)%2 == 0){ // se os dois forem par ordena pelo menor
			return a < b;
		}
		return abs(a)%2 > abs(b)%2; // impar antes de par
	}
	return a % m < b %m; // caso o modulo de um seja maior que o outro
}

int main(){
	
	vector<int> v;
	int x, n;
	
	while(scanf(" %d %d", &n, &m) && (n || m)){
		v.clear();
		for(int i= 0; i < n; ++i){
			scanf("%d", &x);
			v.push_back(x);
		}
		sort(v.begin(), v.end(), cmp);
		printf("%d %d\n", n, m);
		for(int i = 0; i < v.size(); ++i)
			printf("%d\n", v[i]);
	}
	printf("0 0\n");
	
	// cout << (-1 % 2) << endl;
	
	return 0;
}