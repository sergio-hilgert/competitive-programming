#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, maior;
	string str;
	map<char, int> m;
	scanf("%d", &n);
	getchar();
	while(n--){
		m.clear();
		maior = 0;
		getline(cin, str);
		for(int i = 0; i < str.size(); ++i){
			if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <='Z'){
				if(str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] - 'A' + 'a';
				m[str[i]]++;
				maior = max(maior, m[str[i]]);
					
			}
		}
		
		for(map<char, int> :: iterator it = m.begin(); it != m.end(); ++it){
			if(maior == it->second){
				printf("%c", it->first);
			}
		}
		printf("\n");
	}
	
	return 0;
}