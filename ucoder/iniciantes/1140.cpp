#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char c;
	
	scanf(" %c", &c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		printf("vogal\n");
	else
		printf("consoante\n");
	
	return 0;
}