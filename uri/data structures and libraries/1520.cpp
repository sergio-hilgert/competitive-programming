#include <bits/stdc++.h>

using namespace std;

const int maxn = 10010;

int main(){
	
	int n;
	int x, y;
	vector<int> v;
	
	while(scanf(" %d", &n) != EOF){
		v.clear();
		while(n--){
			scanf(" %d %d", &x, &y);
			for(int i = x; i <= y; ++i)
				v.push_back(i);
		}
		sort(v.begin(), v.end());
		scanf(" %d", &x);
		if(binary_search(v.begin(), v.end(), x)){
			int pos = distance(v.begin(), find(v.begin(), v.end(), x));
			printf("%d found from %d", x, pos);
			x = pos;
			for(int i = pos+1; i < v.size(); ++i)
				if(v[i] == v[pos])
					++x;
			printf(" to %d\n", x);
		}else{
			printf("%d not found\n", x);
		}
	}
	
	return 0;
}