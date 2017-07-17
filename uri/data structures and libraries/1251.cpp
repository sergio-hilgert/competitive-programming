#include<bits/stdc++.h>

using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
	return a.second < b.second || (a.second == b.second && a.first > b.first);
}

int main(){
	
	string str;
	vector<pair<int, int> > v;
	int k = 0;
	map<int, int> m;
	
	while(getline(cin, str)){
		if(k)
			printf("\n");
			
		v.clear();
		m.clear();
		
		for(int i = 0; i < str.size(); ++i)
			m[(int)str[i]]++;
		
		for(map<int,int>::iterator it = m.begin(); it != m.end(); ++it)
			v.push_back(make_pair(it->first, it->second));
		
		sort(v.begin(), v.end(), cmp);
		
		for(int i = 0; i < v.size(); ++i)
			printf("%d %d\n", v[i].first, v[i].second);
			
		k = 1;
	}
	
	return 0;
}