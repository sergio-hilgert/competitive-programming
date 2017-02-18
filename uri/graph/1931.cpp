#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back

using namespace std;

vector <pii> v[10000];
int v, a, p, x, y;


int main(){
	
	scanf("%d %d", &v, &a);

	while(a--){
		scanf("%d %d %d", &x, &y, &p);
		v[x].pb(pii(y, p));
		v[y].pb(pii(x, p));
	}
	


	return 0;
}