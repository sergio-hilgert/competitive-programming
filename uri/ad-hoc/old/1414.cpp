#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, soma;
	string str;
	int x;

	
	while(scanf(" %d %d", &n, &m) && (n || m)){
		//cout << "x" << endl;
		soma = 0;
		while(n--){
			cin >> str >> x;
			soma += x;
		}
		m = 3*m;
		printf("%d\n", m-soma);
	}
	
	
	return 0;
}