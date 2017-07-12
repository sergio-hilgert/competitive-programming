#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x;
	string str;
	vector <string> v (1010);
	
	while(scanf(" %d", &n) != EOF){
		v.clear();
		while(n--){
			//scanf(" %d", &x);
			cin >> str;
			v.push_back(str);
		}
		sort(v.begin(), v.end());
		
		for(int i = 0; i < v.size(); ++i){
			cout << v[i] << endl;
		}
	}
	
	return 0;
}