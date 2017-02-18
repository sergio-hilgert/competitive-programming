#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define f first
#define s second

using namespace std;

typedef long long int huge;

int main(){
	
	int n, x, y, a ,b , c, d;
	vector<pii> v;
	scanf("%d", &n);

	while(n--){
		v.clear();

		for(int i = 0; i < 4; ++i){
			scanf("%d %d", &x, &y);
			v.pb(pii(x, y));
		}
		scanf("%d %d", &x, &y);
		if(x >= v[0].f && x <= v[1].f && y >= v[0].s && y <= v[3].s){
			cout << 1 << endl;
		}else {
			cout << 0 << endl;
		}


		

	}

	return 0;
}