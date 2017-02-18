# include <bits/stdc++.h>

using namespace std;

int64_t ipow(int64_t base, int exp){
  int64_t result = 1;
  while(exp){
    if(exp & 1)
      result *= base;
    exp >>= 1;
    base *= base;
  }
  return result;
}

long long int binToDec(string x){
	reverse(x.begin(), x.end());
	long long int result = 0;
	for(int i = 0; i < x.size(); ++i){
		if(x[i] == '1')
			result += ipow(2, i);
	}
	return result;
}

long long int hexToDec(string x){
	reverse(x.begin(), x.end());
	long long int result = 0;
	for(int i = 0; i < x.size(); ++i){
		if(x[i] >= 'a' && x[i] <= 'z'){
			result += (10 + x[i] - 'a') * ipow(16, i);
		}else
			result += (x[i]-'0') * ipow(16,i);
	}
	return result;

}

int main(){

	int n;
	string str, binary, x;
	while(scanf("%d", &n) != EOF){
		for(int i = 1; i <= n; ++i){
			cin >> x >> str;
			printf("Case %d:\n", i);
			if(!str.compare("bin")){
				printf("%lld dec\n", binToDec(x));
				printf("%x hex\n",binToDec(x));

			}else if(!str.compare("dec")){
				printf("%x hex\n", atoi(x.c_str()));
				bitset<32> t(atoi(x.c_str()));
				binary = t.to_string();
				if(binary.find('1') != string :: npos)
					cout<< binary.substr(binary.find('1'), binary.size() - binary.find('1')) <<" bin"<< endl;
				else
					printf("0 bin\n");
			}else{
				printf("%lld dec\n", hexToDec(x));
				bitset<32> t(hexToDec(x));
				binary = t.to_string();
				if(binary.find('1') != string :: npos)
					cout<< binary.substr(binary.find('1'), binary.size() - binary.find('1')) <<" bin"<< endl;
				else
					printf("0 bin\n");
			}
			cout<< endl;
		}

	}

	return 0;
}