#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cheater;
	size_t found;
	string diet, breakfast, lunch, resp;
	scanf("%d", &n);
	getchar();
	while(n--){
		cheater = 0;
		resp = "";
		getline(cin, diet);
		getline(cin, breakfast);
		getline(cin, lunch);
		
		for(int i = 0; i < breakfast.size(); ++i){
			found = diet.find(breakfast[i]);
			if(found != string::npos){
				diet[found] = 'x';
			}else{
				cheater = 1;
				break;
			}
		}
		
		if(!cheater){
			for(int i = 0; i < lunch.size(); ++i){
				found = diet.find(lunch[i]);
				if(found != string::npos){
					diet[found] = 'x';
				}else{
					cheater = 1;
					break;
				}
			}
			if(!cheater){
				for(int i = 0; i < diet.size(); ++i){
					if(diet[i] != 'x'){
						resp += diet[i];
					}
				}
				sort(resp.begin(), resp.end());
				cout << resp << endl;
			}else{
				printf("CHEATER\n");
			}
		}else{
			printf("CHEATER\n");
		}
	}
	
	return 0;
}