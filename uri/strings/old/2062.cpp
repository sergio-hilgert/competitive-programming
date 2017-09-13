#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k = 0;
	string str;
	
	scanf("%d", &n);
	
	while(n--){
		if(k) printf(" ");
		
		cin >> str;
		if(str.size() == 3 && ((str[0] == 'O' && str[1] == 'B') || (str[0] == 'U' && str[1] == 'R')))
			str[2] = 'I';
		cout << str;
		
		k = 1;
	}
	//printf("\n");
	return 0;
}