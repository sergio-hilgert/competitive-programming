#include<bits/stdc++.h>

using namespace std;

int main(){
	double n, m;
	double ok;
	
	while(scanf(" %lf", &n)!= EOF){
		ok = 0;
		for(int i = 0; i < n; ++i){
			scanf(" %lf", &m);
			if(m)
				++ok;
		}
		if(ok >= (n/3.0)*2.0 ){
			printf("impeachment\n");
		}else
			printf("acusacao arquivada\n");
	}
	return 0;
}