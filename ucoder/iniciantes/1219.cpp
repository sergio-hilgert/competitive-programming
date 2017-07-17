#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char resp[4] = {'N', 'L', 'S', 'O'};
	int n;
	char c;
	int result = 0;
	
	scanf("%d", &n);
	
	while(n--){
		scanf(" %c", &c);
		if(c == 'E')
			result = (result + 1) %4;
		else
			result = (result + (4-1))%4;
	}
	
	printf("%c\n", resp[result]);
	
	return 0;
}