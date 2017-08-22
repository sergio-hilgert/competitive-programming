#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, pos, inst[101];
	string str;

	scanf("%d", &n);
	getchar();

	while(n--){
		memset(inst, 0, sizeof inst);
		scanf("%d", &m);
		getchar();
		pos = 0;
		for(int i = 1; i <= m; ++i){
			getline(cin, str);
			if(str[0] == 'L'){
				inst[i] = -1;
				--pos;
			}
			else if(str[0] == 'R'){
				inst[i] = 1;
				++pos;
			}
			else{
				inst[i] = inst[atoi(str.substr(7, str.size()-7).c_str())];
				pos += inst[i];
			}
			
		}
		printf("%d\n", pos);

	}

	return 0;
}