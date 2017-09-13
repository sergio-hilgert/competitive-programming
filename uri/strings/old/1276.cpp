#include <bits/stdc++.h>

using namespace std;
set<char> s;

void arruma(string &str){
	s.clear();
	for(int i = 0; i < str.size(); ++i){
		if(str[i] != ' ')
			s.insert(str[i]);
	}
}

int main(){
	int k, p;
	string str, result;
	char anterior;
	while(getline(cin, str)){
		k = p = 0;
		if(str.size() <= 0){
			printf("\n");
			continue;
		}
		arruma(str);
		result = "";
		s.insert('|');
		for(set<char>::iterator atual = s.begin(); atual != s.end(); ++atual){
			// cout << "ATUAL - ANTERIOR= " << *atual - anterior << endl;
			// cout << *atual << " " << anterior << endl;
			if(k){
				if(*atual - anterior == 1){
					result += *atual;
					// cout << "entrou 0" << endl;
				}else{
					//cout << "r: "+result << endl;
					if(p){
						// cout << "entrou 1" << endl;
						if(result.size() > 1)
							printf(", %c:%c", result[0], result[result.size()-1]);
						else
							printf(", %c:%c", result[0], result[0]);
					}else{
						// cout << "entrou 2 " + result << endl;
						if(result.size() > 1)
							printf("%c:%c", result[0], result[result.size()-1]);
						else
							printf("%c:%c", result[0], result[0]);
						p = 1;
					}
					result = *atual;
				}
			}else{
				k = 1;
				result = *atual;
				// cout << "entrou 3 " + result + " " + anterior << endl;
			}
			anterior = *atual;
		}
		printf("\n");	
	}
	
	return 0;
}