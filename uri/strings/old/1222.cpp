#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int words, lines, chars, pages, lines_count, char_count;
	string str;
	
	while(scanf(" %d %d %d", &words, &lines, &chars) != EOF){
		getchar();
		getline(cin,str);
		lines_count = 0;
		char_count = 0;
		pages = 0;
		for(int i = 0; i < str.size(); ++i){
			++char_count;
			if(char_count == 1 && str[i] == ' ') --char_count;
			if(char_count >= chars){
				if(str[i] != ' ' && i + 1 < str.size() && str[i+1] != ' '){
						while(str[i] != ' ')
							--i;
						char_count = 0;
						++lines_count;
				}else{
					//cout << "str[" << i << "]: " << str[i] << endl;;
					++lines_count;
					char_count = 0;
				}
			}
			if(lines_count >= lines){
				++pages;
				lines_count = 0;
			}
		}
		if(lines_count || char_count)
			printf("%d\n", pages + 1);
		else
			printf("%d\n", pages);
	}
	
	return 0;
}