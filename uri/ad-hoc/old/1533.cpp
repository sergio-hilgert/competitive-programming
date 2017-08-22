#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	int n, x;
	vector<int> v, v2;
	while(scanf("%d", &n) && n){
		v.clear();
		while(n--){
			scanf("%d", &x);
			v.pb(x);
		}
		v2 = v;
		sort(v.begin(), v.end());

		cout << distance(v2.begin(), find(v2.begin(), v2.end(), v[v.size()-2])) + 1 << endl;

	}
	

	return 0;
}