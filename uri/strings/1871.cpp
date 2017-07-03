#include <bits/stdc++.h>
#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()
using namespace std;

int main(){
	
	long long int x, y;
	long long unsigned soma;
	string str, str2;
	
	while(scanf("%lld %lld", &x, &y) && (x || y)){
		soma = x + y;
		str = SSTR(soma);
		str2 = "";
		for(int i = 0; i < str.size(); ++i){
			if(str[i] == '0') continue;
			str2 += str[i];
		}
		cout << str2 << endl;
	}
	
	return 0;
}