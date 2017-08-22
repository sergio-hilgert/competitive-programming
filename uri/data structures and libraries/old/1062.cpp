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
	
	int i, j, k, flag;
	stack<int> original, temp;
	queue<int> result;

	int n, m;

	while(scanf("%d", &n) && n){
		while(scanf("%d", &m) && m){
			while(!result.empty()) result.pop();
			while(!temp.empty()) temp.pop();
			while(!original.empty()) original.pop();
			rf(i, n, 1){
				original.P(i);
			}
			result.P(m);
			f(i, 1, n-1){
				scanf("%d", &k);
				result.P(k);
			}
			flag = 0;
			while(!result.empty()){
				if(!original.empty()){
					temp.P(original.top());
					original.pop();
					while(!result.empty() && !temp.empty() && temp.top() == result.front()){
						temp.pop();
						result.pop();
					}
				}else{
					while(!temp.empty()){
						if(temp.top() == result.front()){
							result.pop();
							temp.pop();
						}else{
							flag = 1;
							break;
						}
					}
					break;	
				}
				
				if(flag)
					break;
			}
			if(flag)
				cout << "No\n";
			else
				cout << "Yes\n";
		}
		cout << endl;
	}

	return 0;
}