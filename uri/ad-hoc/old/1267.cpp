#include <bits/stdc++.h>

using namespace std;

int n , m;
int alunos[110];

void limpaAlunos(){
	for(int i = 0; i < n; ++i){
		alunos[i] = 1;
	}
}

int main(){
	
	int cont, x;

	while(scanf("%d %d", &n, &m) && (n || m)){
		limpaAlunos();
		cont = n;
		while(m--){
			for(int i = 0;	 i < n; ++i){
				scanf("%d", &x);
				if(alunos[i]){
					if(!x){
						alunos[i] = 0;
						--cont;
					}
				}
			}
		}

		if(cont > 0)
			printf("yes\n");
		else
			printf("no\n");

	}

	return 0;
}