#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, original_n, original_m, cont;
	
	scanf(" %d %d", &original_n , &original_m);
	n = original_n;
	m = original_m;
	cont = 0;
	while(m - n < original_n){
		n += original_n;
		m += original_m;
		++cont;
	}
	cout << cont + 2 << endl;
	
	return 0;
}