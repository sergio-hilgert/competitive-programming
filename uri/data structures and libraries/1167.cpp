#include <bits/stdc++.h>

using namespace std;

vector<pair<string, int> > v;

void winner(int pos, pair <string, int> starter){
	if(v.size() == 1) return;
	int dead_pos;
	if(starter.second & 1){
		// impar
		dead_pos = (pos + starter.second) % v.size();
		pair<string, int> dead = v[dead_pos];
		v.erase(v.begin() + dead_pos);
		//cout << dead.first << " " << dead.second << endl;
		//cout << v.size() << endl;
		//cout << "dead_pos antes: " << dead_pos << endl;
		if(dead.second & 1)
			dead_pos = (dead_pos + v.size() - 1) % v.size();
		else
			dead_pos = (dead_pos+1) % v.size();
		
		//cout << "dead_pos depois: " << dead_pos << endl;
		winner(dead_pos, dead);
	}else{
		// par
		dead_pos = (pos + v.size() - starter.second) % v.size();
		pair<string, int> dead = v[dead_pos];
		v.erase(v.begin() + dead_pos);
		
		if(dead.second & 1)
			dead_pos = (dead_pos + v.size() - 1) % v.size();
		else
			dead_pos = (dead_pos+1) % v.size();
		
		winner(dead_pos, dead);
	}
}

int main(){
	
	int n, value;
	string str;
	
	while(scanf("%d", &n) && n){
		v.clear();
		while(n--){
			cin >> str >> value;
			v.push_back(make_pair(str, value));
		}
		winner(0, v[0]);
		cout << "Vencedor(a): " << v[0].first << endl;
	}
	
	return 0;
}