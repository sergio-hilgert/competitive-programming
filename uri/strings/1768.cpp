#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	while(scanf(" %d", &n) != EOF){
		for(int i = 0, j = n/2, k = 1; i < (n/2) + 1; ++i, --j, k += 2){
			for(int J = 0; J < j; ++J)
				printf(" ");
			for(int K = 0; K < k; ++K)
				printf("*");
			printf("\n");
		}
		for(int i = 0, j = n/2, k = 1; i < 2; ++i, --j, k += 2){
			for(int J = 0; J < j; ++J)
				printf(" ");
			for(int K = 0; K < k; ++K)
				printf("*");
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}