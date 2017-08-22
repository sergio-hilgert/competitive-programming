#include <bits/stdc++.h>

#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#define INF INT_MAX
#define MS_INF 127 // 2b
#define MS_H_INF 63 // 1b
#define PB push_back
#define MK make_pair
#define S second
#define F first
#define P push
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define si set<int>
#define msi map<string,int>
#define huge long long int
#define MAX 1 //  <<<<<< MAXIMO

#define cl(array, value) \
	memset((array), (value), sizeof (array))
#define f(i, a, b) \
	for(int i = int (a); i <= int (b); ++i)
#define rf(i, a, b) \
	for(int i = int (a); i >= int (b); --i)
#define fvi(c, it) \
	for(vi::iterator it = (c).begin(); it != (c).end(); ++it)
#define fvii(c, it) \
	for(vii::iterator it = (c).begin(); it != (c).end(); ++it)
#define fmsi(c, it) \
	for(msi::iterator it = (c).begin(); it != (c).end(); ++it)

using namespace std;

vi v;

int bn(int x, int inicio, int fim){
	int l = inicio;
	int r = fim;
	int m;

	while(l <= r){
		m = (l+r)/2;
		if(v[m] == x)
			return m;
		if(v[m] > x){
			r = m-1;
		}else{
			l = m+1;
		}
	}

	return -1;

}

int main(){
	
	int i, j, k, z = 0;
	
	int n, m, x;

	while(scanf("%d %d", &n, &m) && (n || m)){
		printf("CASE# %d:\n", ++z);
		v.clear();
		while(n--){
			scanf("%d", &x);
			v.PB(x);
		}
		sort(v.begin(), v.end());
		while(m--){
			scanf("%d", &x);
			j = bn(x, 0, v.size() - 1);
			do{
				k = j;
				j = bn(x, 0, j-1);
			}while(j != -1);
			++k;
			if(k)
				printf("%d found at %d\n", x, k);
			else
				printf("%d not found\n", x);

		}
	}

	return 0;
}