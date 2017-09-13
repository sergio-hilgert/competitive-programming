#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, total_time, partial_time, correct;
	char c;
	string str;
	
	map<char, int> incorrect;
	
	while(scanf("%d", &n) && n){
		total_time = 0;
		correct = 0;
		incorrect.clear();
		while(n--){
			cin >> c >> partial_time >> str;
			if(str == "incorrect"){
				++incorrect[c];
			}else{
				++correct;
				total_time += partial_time + 20 * incorrect[c];
			}
		}
		printf("%d %d\n", correct, total_time);
		
	}
	
	return 0;
}