#include <bits/stdc++.h>

using namespace std;

int main(){
	
	stack<char> s;
	char c;
	
	while(scanf("%c", &c) != EOF){
		if(c == '*'){
			if(!s.empty()){
				if(s.top() == '*'){
					s.pop();
					printf("</b>");
				}else{
					s.push('*');
					printf("<b>");
				}
			}else{
				s.push('*');
				printf("<b>");
			}
		}else if(c == '_'){
			if(!s.empty()){
				if(s.top() == '_'){
					s.pop();
					printf("</i>");
				}else{
					s.push('_');
					printf("<i>");
				}
			}else{
				s.push('_');
				printf("<i>");
			}
		}else
			printf("%c", c);
	}
	
	return 0;
}