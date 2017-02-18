#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int array[70];
	unsigned long long int x;
	char c;
	int i;
	int odd;

	scanf("%d", &n);
	getchar();

	while(n--){

		memset(array, 0, sizeof array);
		i = 0;

		while(scanf("%c", &c) && (c == 'X' || c == 'O')){
			if(c == 'O'){
				array[i] = 1;
			}
			++i;
		}
		
		scanf("%lld ", &x);

		for(int j = 0; j < i; ++j){			
			odd = x % 2;
			if(array[j] && odd){
				x = (x / 2) + 1;
			}else
				x /= 2;

			if(odd)
				array[j] = abs(array[j] - 1);
			
			if(array[j])
				printf("O");
			else
				printf("X");
		}
		cout << endl;

	}





	return 0;
}