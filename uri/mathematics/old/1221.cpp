# include <bits/stdc++.h>

using namespace std;

int primo(long unsigned x){
	if (x == 2)
		return 1;
	if(x%2 == 0)
		return 0;
	int result = 1;
	int d = 3;
	int limite = (int)(sqrt((double) x) + 1);
	while(d <= limite){
		if(x % d == 0){
			result = 0;
		}
		d += 2;
	}
	return result;
}


int main(){

	int n;
	long unsigned x;

	while(scanf("%d", &n) != EOF){
		while(n--){
			scanf("%lu", &x);
			if(primo(x))
				printf("Prime\n");
			else
				printf("Not Prime\n");
		}

	}



	return 0;

}