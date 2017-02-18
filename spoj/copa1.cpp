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
#define f(i, a, b, c) \
	for(int i = int (a); i <= int (b); i += (c))
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
	int x, y, m;

	queue <int> q;

	f(i, 0, 14, 2){
		scanf("%d %d", &x, &y);
		m = max(x, y);
		if(m == x)
			q.push(i);
		else
			q.push(i + 1);
	}

	f(i, 1, 7, 1){
		scanf("%d %d", &x, &y);
		m = max(x,y);
		j = q.front(); q.pop();
		k = q.front(); q.pop();
		
		if(m == x)
			q.push(j);
		else
			q.push(k);
	}

	cout << (char)('A' + q.front()) << endl;
		
	return 0;
}