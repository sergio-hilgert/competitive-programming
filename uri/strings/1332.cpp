#include <bits/stdc++.h>
#define ONE "eno"
#define TWO "otw"

using namespace std;

int worldFinder(string palavra){
	if((palavra[0] == 'o' && palavra[1] == 'n') || (palavra[1] == 'n' && palavra[2] == 'e') || (palavra[0] == 'o' && palavra[2] == 'e')){
		return 1;
	}
	return 2;
}

int main(){
	
	int n;
	string palavra;
	scanf("%d", &n);

	while(n--){
		cin >> palavra;
		if(palavra.size() > 3)
			printf("3\n");
		else{
			printf("%d\n", worldFinder(palavra));
		}

	}

	return 0;
}