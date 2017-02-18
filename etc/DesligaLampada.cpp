#include <bits/stdc++.h>

using namespace std;

int bulbs(vector<int> v){
	int result = 0;
	int x = 0;
	for(int i = 0; i < v.size(); ++i){
		if(v[i] == x){
			x = 1 - v[i];
			++result;
		}
	}
	return result;
}

int main(){
	
	//0 1 0 1
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(1);

	cout << bulbs(v) << endl;

	return 0;
}