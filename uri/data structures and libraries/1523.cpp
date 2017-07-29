#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int c, n, x, y, ok;
	stack<int> s;
	
	while(scanf(" %d %d", &n, &c) && (n || c)){
		while(!s.empty()) s.pop();
		ok = 1;
		while(n--){
			scanf(" %d %d", &x, &y);
			if(!ok) continue;
			
			if(s.empty())
				s.push(y);
			else{
				if(x >= s.top()){
					while(!s.empty() && x >= s.top()){
						s.pop();
					}
					if(!s.empty() && y > s.top() || s.size() >= c){
						ok = 0;
						continue;
					}
					s.push(y);
				}else{
					if( y > s.top() || s.size() >= c){
						ok = 0;
						continue;
					}
					s.push(y);
				}
			}
		}
		
		if(ok)
			printf("Sim\n");
		else
			printf("Nao\n");
	}
	
	
	return 0;
}