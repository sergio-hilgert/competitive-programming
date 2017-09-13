#include <bits/stdc++.h>

using namespace std;

long long unsigned isValid(string &str){
	if(str.size() <= 0) return -1;
	long long unsigned possibleResult;
	string newStr = "";
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ' ' || str[i] == ',') continue;
		else if(str[i] >= '0' && str[i] <= '9')
			newStr += str[i];
		else if(str[i] == 'O' || str[i] == 'o')
			newStr += '0';
		else if(str[i] == 'l')
			newStr += '1';
		else
			return -1;
	}
	if(newStr.size() <= 0) return -1;
	possibleResult = atoll(newStr.c_str());
	if(possibleResult > 2147483647 || possibleResult < 0)
		return -1;
	return possibleResult;
}

int main(){
	
	string str;
	long long unsigned result;
	while(getline(cin, str)){
		result = isValid(str);
		if(result != -1)
			printf("%llu\n", result);
		else
			printf("error\n");
	}
	
	return 0;
}