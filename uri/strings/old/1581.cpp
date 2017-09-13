#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, ok;
	string str1, str2;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &m);
		cin >> str1;
		ok = 1;
		while(--m){
			cin >> str2;
			if(str1 != str2){
				ok = 0;
			}
		}
		if(ok)
			cout << str1 << endl;
		else
			printf("ingles\n");
	}
	
	return 0;
}