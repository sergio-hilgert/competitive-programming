#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, turma, x;
	double media, porcento;
	vector <int> v;

	scanf("%d", &n);

	while(n--){
		v.clear();
		media = 0;
		porcento = 0;
		scanf("%d", &turma);

		for(int i = 0; i < turma; ++i){
			scanf("%d", &x);
			v.push_back(x);
			media += x;
		}
		media /= turma;
		for(int i = 0; i < turma; ++i){
			if(v[i] > media)
				++porcento;
		}
		printf("%.3f%%\n", (porcento/turma)*100 );
	}

	return 0;
}