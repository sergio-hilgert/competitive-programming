#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, a, b, x, y;

	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	scanf("%d %d", &x, &y);
	if(n >= a && n <= b && n >= x && n <= y)
		cout << "possivel" << endl;
	else
		cout << "impossivel" << endl;


	return 0;
}