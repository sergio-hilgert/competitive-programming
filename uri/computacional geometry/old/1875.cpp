#include <bits/stdc++.h>

using namespace std;
int n, gols, g, r, b;
string linha;

void printaResult(){
	if(g == r && r == b)
		printf("trempate\n");
	else{
		vector<int> v;
		v.push_back(g);
		v.push_back(r);
		v.push_back(b);
		sort(v.begin(), v.end());
		if(v[1] == v[2])
			printf("empate\n");
		else{
			if(v[2] == g)
				printf("green\n");
			if(v[2] == r)
				printf("red\n");
			if(v[2] == b)
				printf("blue\n");
		}
	}
}

int main(){
	
	map <string, int> m;

	m["G R"] = 1;
	m["G B"] = 2;
	m["R G"] = 2;
	m["R B"] = 1;
	m["B G"] = 1;
	m["B R"] = 2;

	scanf("%d", &n);
	while(n--){
		g = r = b = 0;
		scanf("%d", &gols);
		getchar();
		while(gols--){
			getline(cin, linha);
			if(linha[0] == 'G')
				g += m[linha];

			else if(linha[0] == 'R')
				r += m[linha];

			else
				b += m[linha];
		}
		printaResult();
	}

	return 0;
}