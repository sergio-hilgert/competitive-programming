#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double a ,b;
	double media;
	vector<int> v;
	int contador;
	
	while(scanf(" %d", &n) != EOF){
		media = -1;
		v.clear();
		contador = 1;
		while(n--){
			scanf(" %lf %lf", &a, &b);
			if(b/a > media){
				media = b/a;
				v.push_back(contador);
			}
			++contador;
		}
		for(int i = 0; i < v.size(); ++i){
			printf("%d\n", v[i]);
		}
	}
	
	return 0;
}