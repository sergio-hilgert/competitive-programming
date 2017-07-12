#include<bits/stdc++.h>
#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

using namespace std;
string maior = "", str;

string calc(){
	stringstream ss;
	ss.clear();
	ss.str("");
	ss<< str;
	string palavra, result = "";
	int k = 0;
	while(ss >> palavra){
		if(maior.size() <= palavra.size())
			maior = palavra;
		if(k)
			result += "-" + SSTR(palavra.size());
		else
			result += SSTR(palavra.size());
		k = 1;
	}
	return result;
}

int main(){
	maior = "";
	while(getline(cin, str)){
		if(str != "0"){
			cout << calc() << endl;
		}else{
			cout << endl <<"The biggest word: " << maior << endl;
			maior = "";
		}
			
	}
	
	return 0;
}