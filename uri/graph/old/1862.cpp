#include <bits/stdc++.h>

using namespace std;

int grafo[1010][1010];
int visitados[1010];
int n, cor, cont, p;
char c;
vector<int> vec;

void dfs(int v){
	visitados[v] = cor;
	++vec[cor-1];
	for(int i = 0 ; i < n; ++i){
		if(!visitados[i] && grafo[v][i]){
			dfs(i);
		}
	}


}

void conexo(){
	cont = 0;
	for(int i = 0; i < n; ++i){
		if(visitados[i] == cor){
			for(int j = 0; j < n; ++j){
				if(i != j && grafo[i][j] == 1){
					++cont;
				}
			}
		}
	}

}

int main(){

	while(scanf("%d", &n) != EOF){
		cor = 0;
		cont = p = 0;
		memset(grafo, 0, sizeof(grafo));
		memset(visitados, 0, sizeof(visitados));
		vec.clear();
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin>> c;
				if (c == 'S')
					grafo[i][j] = 1;
			}
		}
		for(int i = 0; i< n; ++i){
			if(!visitados[i]){
				vec.push_back(0);
				++cor;
				dfs(i);
				conexo();
				//cout << cont<< endl;
				//cout<< vec[cor-1]<< endl;
				if(cont/2 != (vec[cor-1]*(vec[cor-1]-1)/2)){
					p = 1;
					break;
				}
			}
			
		}
		if(!p){
			sort(vec.begin(), vec.end(), greater<int>());
			cout << cor <<endl;
			for(int i = 0; i < vec.size(); ++i){
				if(i == vec.size()-1)
					cout<< vec[i]<<endl;
				else
					cout<< vec[i]<< " ";

			}
			
		}else
			cout<< "-1\n";
	}



	return 0;
}