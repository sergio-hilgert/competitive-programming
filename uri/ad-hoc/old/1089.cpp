#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x, resp, primeiro, segundo, flag;

	while(scanf("%d", &n) && n){
		resp = 2;
		n -= 2;
		flag = 0;
		scanf("%d", &primeiro);
		scanf("%d", &segundo);
		if(primeiro > segundo)
			flag = 1;
		while(n--){
			scanf("%d", &x);
			if(primeiro > segundo){
				if(x > segundo)
					resp++;
				primeiro = segundo;
				segundo = x;
			}else{
				if(x < segundo)
					resp++;
				primeiro = segundo;
				segundo = x;
			}
		}
		if(flag && primeiro < segundo){
			resp--;
		}else if(!flag && primeiro > segundo)
			resp--;
		cout << resp << endl;
	}

	return 0;
}