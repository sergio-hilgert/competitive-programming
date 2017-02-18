#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m;
	string str;

	scanf("%d %d", &n, &m);
	
	while(m--){
		cin >> str;
		if(str == "fechou")
			++n;
		else
			--n;
	}
	cout << n << endl;

	return 0;
}