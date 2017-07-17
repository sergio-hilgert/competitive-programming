#include <bits/stdc++.h>

using namespace std;

struct people{
	string name;
	string color;
	string shirt_size;
	
	people(string n, string c, string s) : name(n), color(c), shirt_size(s) {}
	bool operator < (const people &o) const{
		return color > o.color || ((color == o.color && shirt_size < o.shirt_size) || (color == o.color && shirt_size == o.shirt_size && name > o.name)) ;
	}
};

int main(){
	
	int n, k = 0;
	string name, shirt, color;
	priority_queue <people> pq;
	
	while(scanf("%d", &n) && n){
		if(k) printf("\n");
		while(!pq.empty()) pq.pop();
		while(n--){
			getchar();
			getline(cin, name);
			cin >> color >> shirt;	
			pq.push(people(name, color, shirt));
		}
		while(!pq.empty()){
			cout << pq.top().color + " " + pq.top().shirt_size + " " + pq.top().name << endl;
			pq.pop();
		}
		k = 1;
	}
	
	return 0;
}