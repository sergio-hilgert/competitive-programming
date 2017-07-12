#include <bits/stdc++.h>

using namespace std;

string stringo(int &n){
	stringstream ss;
	ss.clear();
	ss.str("");
	ss << n;
	string result;
	ss >> result;
	reverse(result.begin(), result.end());
	return result;
}

int main(){
	
	int n, x, y, j;
	
	scanf(" %d", &n);
	while(n--){
		scanf(" %d %d", &x, &y);
		for(int i = x; i <= x + (y-x)*2; ++i){
			if(i < y){
				printf("%d", i);
			}else if(i == y){
				printf("%d", i);
				cout << stringo(i);
				j = i - 1;
			}else{
				cout << stringo(j);
				--j;
			}
			
		}
		printf("\n");
	}
	
	return 0;
}