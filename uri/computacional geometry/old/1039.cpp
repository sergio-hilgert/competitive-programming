# include <bits/stdc++.h>

using namespace std;

int main(){

	int r1, r2, x1, y1, x2, y2;
	double d;
	while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
		d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		//cout << d<< endl;
		if(r1-r2 >= d)
			printf("RICO\n");
		else
			printf("MORTO\n");

	}

	return 0;
}