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

#define CLEAR(array, value) \
	memset((array), (value), sizeof (array))
#define REP(i, a, b) \
	for(int i = int (a); i <= int (b); ++i)
#define IREP(i, a, b) \
	for(int i = int (a); i >= int (b); --i)
#define TRvi(c, it) \
	for(vi::iterator it = (c).begin(); it != (c).end(); ++it)
#define TRvii(c, it) \
	for(vii::iterator it = (c).begin(); it != (c).end(); ++it)
#define TRmsi(c, it) \
	for(msi::iterator it = (c).begin(); it != (c).end(); ++it)

using namespace std;

int main(){
	
	int n, i;
	string str;

	while(scanf("%d", &n)!= EOF){
		getchar();
		
		while(n--){
			getline(cin, str);

			IREP(i, (str.size()/2) - 1, 0){
				cout<<str[i];
			}
			IREP(i, str.size() - 1, str.size()/2){
				cout << str[i];
			}
			cout << endl;
		}
		
	}


	return 0;
}