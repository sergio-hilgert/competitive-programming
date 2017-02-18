#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set<long int> s;
	long int y;
	int n, x;

	scanf("%d", &n);

	while(n--){
		s.clear();
		scanf("%d", &x);
		while(x--){
			scanf("%ld", &y);
			s.insert(y);
		}
		cout << s.size() << endl;
	}


	return 0;
}