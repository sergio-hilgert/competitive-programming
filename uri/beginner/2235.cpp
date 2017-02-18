#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;
	int x;

	for(int i = 0; i < 3; ++i){
		scanf("%d", &x);
		v.push_back(x);
	}

	sort(v.begin(), v.end(), greater<int>());
	
	if(v[0] == v[1] || v[1] == v[2]){
		printf("S\n");
		return 0;
	}

	if(v[0] == v[1] + v[2]){
		printf("S\n");
		return 0;
	}

	printf("N\n");

	return 0;
}