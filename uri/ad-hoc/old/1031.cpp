#include <bits/stdc++.h>

using namespace std;

int josephus(int x, int y){
    if(x == 1) return 1;
    return (josephus(x-1,y)+y-1)%x+1;
}

int main(){
	int n, jumps;
	while(scanf(" %d", &n) && n){
		--n;
		jumps = 1;
		while(josephus(n, jumps) != 12)
			++jumps;
		printf("%d\n", jumps);
	}
	
	return 0;
}