#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	
	int b, n, x, y, p;
	vector <int> v;

	while(scanf("%d %d", &b ,&n) && (b || n)){
		v.clear();
		while(b--){
			scanf("%d", &p);
			v.pb(p);
		}
		while(n--){
			scanf("%d %d %d", &x, &y, &p);
			v[x-1] -= p;
			v[y-1] += p;
		}
		int flag = 1;
		for(int i = 0; i < v.size(); ++i){
			if(v[i] < 0){
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("S\n");
		else
			printf("N\n");
	}

	return 0;
}