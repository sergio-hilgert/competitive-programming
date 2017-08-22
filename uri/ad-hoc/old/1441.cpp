#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int resp, maior = 0;

	while(scanf("%d" ,&n) && n){
		resp = n;
		maior = n;
		while(resp != 1){
			if(resp %2 == 0)
				resp /= 2;
			else
				resp = (resp*3) + 1;
			maior = max(resp, maior);
		}
		cout << maior << endl;

	}

	return 0;
}