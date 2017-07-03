#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str1, str2;
	int count, resp, I, J;
	while(getline(cin, str1)){
		getline(cin, str2);
		resp = 0;
		for(int i = 0; i < str1.size(); ++i){
			for(int j = 0; j < str2.size(); ++j){
				count = 0;
				I = i; J = j;
				while(str1[I] == str2[J]){
					++count; ++I; ++J;
					if(I >= str1.size() || J >= str2.size()) break;
				}
				resp = max(count, resp);
			}
		}
		printf("%d\n", resp);
	}
	
	return 0;
}