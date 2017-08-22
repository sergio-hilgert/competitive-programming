#include <bits/stdc++.h>
#define pb push_back
#define pii pair<int,int>

using namespace std;

int main(){
	
	int n, m, x, y, cont;

	vector<int> v1;

	while(scanf("%d %d", &n, &m) != EOF){
		cont = 0;
		v1.clear();

		while(n--){
			scanf("%d %d", &x, &y);
			if(x > y)
				cont += 3;
			else{
				v1.pb(y - x);
			}
		}
		
		sort(v1.begin(), v1.end());
		for(int i = 0; i < v1.size(); ++i){
			if(v1[i]-m <= -1){
				m -= v1[i]+1;
				cont += 3;
			}else if(v1[i]-m == 0){
				m = 0;
				cont++;
			}
		}

		cout << cont << endl;


	}

	return 0;
}