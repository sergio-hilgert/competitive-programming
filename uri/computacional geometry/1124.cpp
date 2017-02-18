#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int l, c, r1, r2, x1, x2, y1, y2;
	double d;
	while(scanf("%d %d %d %d", &l, &c, &r1, &r2) && (l || c || r1 || r2)){
		x1 = r1;
		x2 = l - r2;
		y1 = c - r1;
		y2 = r2;
		d = sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
		if(d >= r1 + r2 && r1*2 <= l && r1*2 <= c && r2*2 <= l && r2*2 <= c){
			printf("S\n");
		}else
			printf("N\n");
	}

	return 0;
}