#include <bits/stdc++.h>

#define _CRT_SECURE_NO_DEPRECATE
#define INF INT_MAX
#define MS_INF 127 // 2b
#define MS_H_INF 63 // 1b
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define P push
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define si set<int>
#define ss set<string>
#define msi map<string,int>
#define ms memset

#define MAX 1 //  <<<<<< MAXIMO

typedef long long int 	ll;

#define rep(i, a, b) \
	for(int i = int (a); i <= int (b); ++i)
#define irep(i, a, b) \
	for(int i = int (a); i >= int (b); --i)

// editar o iterator para a estrutura utilizada
#define ITrep(c, it) \
	for(ss::iterator it = (c).begin(); it != (c).end(); ++it)

using namespace std;

int main(){
	
	char c;
	string str = "";
	ss s;
	
	while(scanf("%c", &c) != EOF){
		if(c >= 65 && c <= 90 || c >= 97 && c <= 122){
			if(c >= 65 && c <= 90)
				c = c - 'A' + 'a';
			str += c;
		}else{
			if(!str.empty()){
				s.insert(str);

			}
			str = "";
		}
	}

	ss::iterator it;

	ITrep(s, it){
		cout << *it << endl;
	}


	return 0;
}