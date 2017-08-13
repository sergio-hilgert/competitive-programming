#include <bits/stdc++.h>

using namespace std;

struct equipe{
	int baloes;
	int tempo;
	
	bool operator < (const equipe &o) const{
		return baloes > o.baloes || (baloes == o.baloes && tempo < o.tempo;
	}
}

int main(){
	
	int vagas, fatecs, equipes;
	
	scanf(" %d %d %d", &vagas, &fatecs, &equipes);
	
	
	
	return 0;
}