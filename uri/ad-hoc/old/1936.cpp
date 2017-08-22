#include <bits/stdc++.h>

using namespace std;

long int fatorial[15];

int fat(){
	fatorial[0] = 1;
	for(int i = 1; i <= 10; ++i){
		fatorial[i] = i*fatorial[i-1];
	}

}

int main(){

	fat();
	int n, q = 0;

	scanf("%d", &n);

	for(int i = 10; i > 0; --i){
		if(n >= fatorial[i]){
			q += n/fatorial[i];
			n = n%fatorial[i];
		}
	}

	cout << q << endl;

	return 0;
}