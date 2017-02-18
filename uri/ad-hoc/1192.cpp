#include <bits/stdc++.h>

using namespace std;

void calcula(int x, char c, int y){
	if(x == y)
		printf("%d\n", x * y);
	else if (c >= 65 && c <= 90)
		printf("%d\n", y - x);
	else
		printf("%d\n", x + y );


}


int main(){
	
	char x, l, y;
	int n;

	scanf("%d", &n);
	while(n--){
		scanf(" %c%c%c", &x, &l, &y);
		calcula(x - '0', l, y - '0');
	}


	return 0;
}