#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str, nome;
	vector <string> v;
	map<string, string> nomes;
	
	while(getline(cin, str)){
		nome = str;
		for(int i =0; i< str.size(); ++i){
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		v.push_back(str);
		nomes[str] = nome;
	}
	
	sort(v.begin(), v.end());
	
	cout << nomes[v[v.size() -1]] << endl;
	return 0;
}