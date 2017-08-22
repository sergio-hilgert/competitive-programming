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
#define vipv vector<pair<int,vector<string> > >
#define si set<int>
#define msi map<string,int>
#define mis multimap<int,string>
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

//utilizando uma struct no sort para ordenar em ordem reversa.
struct predicate
{
    bool operator ()( const std::pair<int, string> &left, const std::pair<int, string> &right ) const
    {
        return (left.F > right.F); 
    }
};

int main(){
	
	int i, j, k;
	vector< pair<int, string> > v;
	int n;
	string str, palavra;
	stringstream ss;

	scanf("%d", &n);
	getchar();

	while(n--){
		getline(cin, str);
		v.clear();
		ss.clear();
		ss.str("");

		ss << str;
		
		while(ss >> palavra){
			v.PB(MK(palavra.size(), palavra));
		}

		//stable sort para nao perder a ordem dos elementos
		stable_sort(v.begin(), v.end(), predicate());
		cout << v[0].S;
		if(v.size() > 1){
			f(i, 1, v.size()-1){
				cout << " " << v[i].S;
			}
			
		}
		cout << endl;

	}

	return 0;
}