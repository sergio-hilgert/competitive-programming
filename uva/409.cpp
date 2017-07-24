#include <bits/stdc++.h>

using namespace std;

int cont, old_cont;
int n, m;
map<string, int> mapa;
string str, line, c_line;
vector<string> v;

string fix_line(string line){
	string result = "";
	for(int i = 0; i < line.size(); ++i){
		if(line[i] >= 'A' && line[i] <= 'Z')
			result += line[i] - 'A' + 'a';
		else if(line[i] >= 'a' && line[i] <= 'z')
			result += line[i];
		else
			result += ' ';
	}
	return result;
}

void get_count(string line){
	istringstream ss;
	ss.clear();
	ss.str(line);
	string palavra;
	while(ss >> palavra){
		//cout << palavra << endl;
		if(mapa[palavra])
			++cont;
	}
}

int main(){
	int k = 1;
	while(scanf("%d %d", &n, &m) != EOF){
		mapa.clear();
		while(n--){
			cin >> str;	
			mapa[str] = 1;
		}
		getchar();
		old_cont = -1;
		v.clear();
		while(m--){
			cont = 0;
			getline(cin, line);
			string c_line = line;
			//cout << c_line << endl;
			line = fix_line(line);
			get_count(line);
			
			if(old_cont < cont){
				old_cont = cont;
				v.clear();
				v.push_back(c_line);
				//cout << c_line << endl;
			}else if (old_cont == cont){
				v.push_back(c_line);
			}
		}
		//cout << v.size() << endl;
		printf("Excuse Set #%d\n", k++);
		for(int z = 0; z < v.size(); ++z){
			cout << v[z] << endl;
		}
		printf("\n");
		
		
		
	}
	
	return 0;
}