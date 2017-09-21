#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int p, j1, j2, r, a;

	scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

	int result = j1 + j2;

	if(!r && !a){
		if(p){
			if(result % 2 == 0)
				cout << "Jogador 1 ganha!" << endl;
			else
				cout << "Jogador 2 ganha!" << endl;
		}else{
			if(result % 2 == 0)
				cout << "Jogador 2 ganha!" << endl;
			else
				cout << "Jogador 1 ganha!" << endl;
		}
	}else{
		if(r && !a){
			cout << "Jogador 1 ganha!" << endl;
		
		}else if(r && a){
			cout << "Jogador 2 ganha!" << endl;
		
		}else if (!r && a){
			cout << "Jogador 1 ganha!" << endl;
		}
	}

	return 0;
}