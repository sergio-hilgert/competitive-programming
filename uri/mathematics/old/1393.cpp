#include <bits/stdc++.h>

using namespace std;

int fibonnaci[41];

int fb(int n){
	if(fibonnaci[n]) return fibonnaci[n];
	return fibonnaci[n] = fb(n-1) + fb(n-2);

}

int main(){
	
	fibonnaci[0] = 1;
	fibonnaci[1] = 1;
	int n;
	
	while(scanf("%d", &n) && n){
		printf("%d\n",fb(n));
	}

	return 0;
}