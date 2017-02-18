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
#define pdd pair<double,double>
#define vdd vector<pdd>
#define vii vector<pii>
#define si set<int>
#define msi map<string,int>
#define mii map<int, int>
#define huge long long int
#define MAX 1 //  <<<<<< MAXIMO

#define cl(array, value) \
	memset((array), (value), sizeof (array))
#define f(i, a, b) \
	for(int i = int (a); i < int (b); ++i)
#define rf(i, a, b) \
	for(int i = int (a); i >= int (b); --i)
#define fvi(c, it) \
	for(vi::iterator it = (c).begin(); it != (c).end(); ++it)
#define fvii(c, it) \
	for(vii::iterator it = (c).begin(); it != (c).end(); ++it)
#define fmsi(c, it) \
	for(msi::iterator it = (c).begin(); it != (c).end(); ++it)

#define fmii(c, it) \
	for(mii::iterator it = (c).begin(); it != (c).end(); ++it)

using namespace std;

int main(){
	
	int i, j, k = 0;
	mii m;
	mii :: iterator it;
	int n;
	double x, y, X, Y; 
	i = 0;
	stringstream ss;
	while(scanf("%d", &n) && n){
		if(k){
			cout << endl;
		}
		m.clear();
		X = 0;
		Y = 0;

		while(n--){
			scanf("%lf %lf", &x, &y);
			X += x;
			Y += y;
			m[y/x] += x;
		}

		printf("Cidade# %d:\n", ++i);
		int p = 0;
		fmii(m, it){
			if(p){
				cout << " ";
			}
			printf("%d-%d", it->S, it->F);
			p = 1;
		}

		cout << endl;
		double w = Y/X;
		int z = w * 100;
		double w2 = z/100.0;
		printf("Consumo medio: %.2lf m3.\n", w2);		
		k = 1;
	}	

	return 0;
}