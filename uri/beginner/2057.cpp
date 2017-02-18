#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	int x = a + b + c;
	
	if(x >= 0){
		cout << x % 24 << endl;
	
	}else {
		cout << 24 + x << endl;

	}

	

	return 0;
}