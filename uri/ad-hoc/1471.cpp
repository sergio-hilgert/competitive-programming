#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	int x, y, p, array[10010];

	while(scanf("%d %d", &x, &y) != EOF){
		memset(array, 0, sizeof array);

		while(y--){
			scanf("%d", &p);
			array[p] = 1;
		}
		int flag = 0;
		string resp = "";
		stringstream ss("");
		for(int i = 1; i <= x; ++i){
			if(!array[i]){
				ss << i;
				resp += ss.str() + " ";
				ss.str("");
				flag = 1;
			}
		}
		if(flag)
			cout << resp << endl;
		else{
			cout << '*' << endl;
		}
	}

	return 0;
}