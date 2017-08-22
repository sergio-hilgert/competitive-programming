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

int main(){
	
	int i, j, k, x, y, p;
	vi v1,v2;
	int n;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &x);
		if(x % 2 == 0)
			v1.PB(x);
		else
			v2.PB(x);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<int>());

	f(i, 0, v1.size()-1){
		printf("%d\n", v1[i]);
	}
	f(i, 0, v2.size()-1){
		printf("%d\n", v2[i]);
	}	

	return 0;
}