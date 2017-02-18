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

#define c(array, value) \
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
	
	int i, j, k;

	int n;
	string str, palavra;
	stringstream ss;

	scanf("%d", &n);
	getchar();

	while(n--){
		getline(cin, str);
		ss.clear();
		ss.str("");
		ss << str;
		while(ss >> palavra){
			cout << palavra[0];
		}		
		cout << endl;
	}

	return 0;
}