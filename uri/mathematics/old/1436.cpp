# include <bits/stdc++.h>

using namespace std;

int main(){

	int t, n, x;
	vector <int> age;
	string l;

	scanf("%d", &t);
	for(int i = 1; i <= t; ++i){
		age.clear();
		scanf("%d", &n);
		while(n--){
			scanf("%d", &x);
			age.push_back(x);
		}
		printf("Case %d: %d\n", i, age[age.size()/2]);

	}


	return 0;
}