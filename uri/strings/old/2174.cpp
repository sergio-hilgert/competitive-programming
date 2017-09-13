#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string str;
	scanf("%d", &n);
	set<string> s;
	while(n--){
		cin >> str;
		s.insert(str);
	}
	printf("Falta(m) %d pomekon(s).\n", 151 - (int)s.size());
	
	return 0;
}