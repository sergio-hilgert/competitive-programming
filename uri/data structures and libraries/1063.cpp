#include <bits/stdc++.h>

using namespace std;

const int maxn = 0;
const int inf = 0x3f3f3f3f;

int main(){
	int n;
	char c;
	char final[32];
	char comeco[32];
	stack<char> s;
	string result;
	while(scanf(" %d", &n) && n){
		while(!s.empty()) s.pop();
		for(int i = 0; i < n; ++i){
			scanf(" %c", &comeco[i]);
		}
		for(int i = 0; i < n; ++i){
			scanf(" %c", &final[i]);
		}
		s.push(comeco[0]);
		int deuruim = 0;
		result = 'I';
		for(int i = 0, j = 1; i < n; ++i){
			while(j < n && (s.empty() || s.top() != final[i])){
				s.push(comeco[j++]);
				result += 'I';
			}
			if(!s.empty()){
				//cout << i << " " <<s.top() << " " << final[i] << endl;
				if(!deuruim && s.top() == final[i])
					result += 'R';
				else
					deuruim = 1;
				s.pop();
				
			}
		}
		cout << result;
		if(deuruim)
			printf(" Impossible");
		printf("\n");
		
	}
	
	return 0;
}