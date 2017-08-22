#include <bits/stdc++.h>

using namespace std;

map<int, long int> m;

long int calcula(int x){
	if(x <= 1){
		return 1;
	}

	if(m.find(x) != m.end()){
		return m[x];
	
	}else{
		return m[x] = x*x + calcula(x-1);
	}

}

int main(){
	
	int n;

	while(scanf("%d", &n) && n){
		printf("%ld\n", calcula(n));
	}

	return 0;
}