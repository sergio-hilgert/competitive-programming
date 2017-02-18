# include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector <int> l[9];
vector <int> c[9];
vector <int> q[9];


void limpaV(){
	for(int i = 0 ; i < 9; ++i){
		l[i].clear();
		c[i].clear();
		q[i].clear();
	}
}

int main(){

	int n, x, I, J, index, flag;

	
	scanf("%d", &n);

	for(int i = 1; i <= n; ++i){
		flag = 0;
		printf("Instancia %d\n", i);
		limpaV();
		I = -3;
		for(int k = 0; k < 9; ++k){
			if(k%3 == 0) I += 3;
			J = -1;
			for(int j = 0; j < 9; ++j){
				if(j%3 == 0) ++J;
				scanf("%d", &x);
				if(find(l[k].begin(), l[k].end(), x) != l[k].end()){
					flag = 1;
				}else{
					l[k].pb(x);
				}


				if(find(c[j].begin(), c[j].end(), x) != c[j].end()){
					flag = 1;
				}else{
					c[j].pb(x);
				}

				index = I+J;
				if(find(q[index].begin(), q[index].end(), x) != q[index].end()){
					flag = 1;
				}else {
					q[index].pb(x);
				}
			}
		}

		if(flag)
			printf("NAO\n\n");
		else
			printf("SIM\n\n");


	}

	return 0;
}