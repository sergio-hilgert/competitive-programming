#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<string> v;
	
	int n;
	long int result;
	string str;
	while(scanf(" %d", &n) != EOF){
		
		if(n == 1){
			cin >> str;
			printf("0\n");
			continue;
		}
		result = 0L;
		v.clear();
		while(n--){
			cin >> str;
			v.push_back(str);
			
		}
		sort(v.begin(), v.end());
		for(int i = 1; i < v.size(); ++i){
			for(int j = 0; j < v[i].size(); ++j){
				if(v[i][j] == v[i-1][j])
					++result;
				else
					break;
			}
		}
		printf("%ld\n", result);
		
	}
	
	return 0;
}