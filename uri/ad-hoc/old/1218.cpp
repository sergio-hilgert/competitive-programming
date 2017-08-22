#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, f;
	map <string, int> m;
	string str, key, palavra;
	stringstream ss;
	int i = 1, k = 0;

	while(scanf("%d ", &n) != EOF){
		if(k){
			printf("\n");
			k = 0;
		}
		printf("Caso %d:\n", i);
		getline(cin, str);
		ss.str("");
		ss.clear();
		m.clear();
		f = 1;
		
		ss << str;
		key = "";
		while(ss >> palavra){
			if(f%2 == 0){
				key += palavra;
				if(m.find(key) != m.end()){
					++m[key];
				}else{
					m[key] = 1;
				}
				key = "";
			}else{
				key += palavra;
			}
			++f;
		}

		ss.str("");
		ss.clear();
		ss << n;
		key = ss.str();
		cout << "Pares Iguais: " << m[key + 'F'] + m[key + 'M'] << endl; 
		cout << "F: " << m[key + 'F'] << endl << "M: " << m[key + 'M'] << endl;
		k = 1;
		++i;
	}

	return 0;
}