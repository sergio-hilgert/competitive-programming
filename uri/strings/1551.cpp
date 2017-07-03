#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set<char> s;
	string str;
	int n;
	
	scanf("%d", &n);
	getchar();
	while(n--){
		s.clear();
		getline(cin, str);
		for(int i = 0; i < str.size(); ++i){
			if(str[i] == ' ' || str[i] == ',') continue;
			s.insert(str[i]);
		}
		if(s.size() >= 26)
			printf("frase completa\n");
		else if(s.size() >= 13){
			printf("frase quase completa\n");
		}else{
			printf("frase mal elaborada\n");
		}
	}
	
	
	return 0;
}