#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	
	int a, b, m ,cont, cont2, x;
	vector <int> v;
	vector <int> v2;

	while(scanf("%d %d", &a, &b) && (a || b)){
		v.clear();
		v2.clear();
		cont = 0;
		cont2 = 0;
		while(a--){
			scanf("%d", &x);
			if(!binary_search(v.begin(), v.end(), x))
				v.pb(x);
		}
		while(b--){
			scanf("%d", &x);
			if(!binary_search(v2.begin(), v2.end(), x)){
				v2.pb(x);
				if(!binary_search(v.begin(), v.end(), x))
					++cont;
			}

		}
		for(int i = 0; i < v.size(); ++i){
			if(!binary_search(v2.begin(), v2.end(), v[i]))
				++cont2;
		}

		printf("%d\n", min(cont, cont2));
	}

	return 0;
}