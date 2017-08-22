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

int gcd(int a, int b){
	return b!=0 ? gcd(b, a%b) : a;
}

int main(){
	
	int i, j, k;
	char c;
	int n, n1, d1, n2, d2, nr, dr;

	scanf("%d", &n);

	while(n--){
		scanf("%d / %d %c %d / %d", &n1, &d1, &c, &n2, &d2);
		if(c == '+'){
			nr = n1*d2 + n2*d1;
			dr = d1*d2;
		}else if(c == '-'){
			nr = n1*d2 - n2*d1;
			dr = d1*d2;
		}else if(c == '*'){
			nr = n1*n2;
			dr = d1*d2;
		}else {
			nr = n1*d2;
			dr = n2*d1;
		}
		j = gcd(nr, dr);
		if((nr < 0 && dr > 0) || (nr > 0 && dr < 0)){
			printf("-%d/%d = -%d/%d\n", abs(nr), abs(dr), abs(nr/j), abs(dr/j));
		}else
			printf("%d/%d = %d/%d\n", abs(nr), abs(dr), abs(nr/j), abs(dr/j));


	}

	return 0;
}