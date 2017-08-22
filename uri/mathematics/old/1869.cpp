# include <bits/stdc++.h>

using namespace std;

string decToTd(long long unsigned x){
	if(!x) return "0";
	string str = "";
	stringstream ss;
	while(x){
		ss.str("");
		if(x%32 <= 9){
			ss << x%32;
			str += ss.str();
		}
		else
			str += 'A' + x%32 - 10;
		x /= 32;
	}

	return str;

}

int main(){
	
	long long unsigned n;
	string str;
	while(scanf("%llu", &n)!= EOF){
		str = decToTd(n);
		reverse(str.begin(), str.end());
		cout << str<< endl;

	}


	return 0;
}