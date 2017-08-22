#include <bits/stdc++.h>

using namespace std;

int isSubstring(string &original, string &test){
	int j = 0;
	for(int i = 0; i < original.size() && j < test.size(); ++i){
		if(original[i] == test[j])
			++j;
	}
	return j == test.size();
}

int main(){
	int n, m;
	string str, test;
	scanf("%d", &n);
	
	while(n--){
		cin >> str;
		scanf(" %d", &m);
		while(m--){
			cin >> test;
			if(isSubstring(str, test))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	
	return 0;
}