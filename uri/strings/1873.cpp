#include <bits/stdc++.h>

using namespace std;

int main(){
	
	map<string, pair<string, string> > m;
	
	m["tesoura"] = make_pair("papel", "lagarto");
	m["papel"] = make_pair("pedra", "spock");
	m["pedra"] = make_pair("lagarto", "tesoura");
	m["lagarto"] = make_pair("spock", "papel");
	m["spock"] = make_pair("tesoura", "pedra");
	
	int n;
	string rakesh, sheldon;
	
	scanf("%d",&n);
	
	while(n--){
		cin >> rakesh >> sheldon;
		if(rakesh == sheldon){
			printf("empate\n");
			continue;
		}
		if(m[rakesh].first == sheldon || m[rakesh].second == sheldon){
			printf("rajesh\n");
		}else{
			printf("sheldon\n");
		}
	}
	
	return 0;
}