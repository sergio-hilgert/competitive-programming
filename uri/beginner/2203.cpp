#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x1, y1, x2, y2, v, r1, r2;
	double distance;

	while(scanf("%d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &v, &r1, &r2) != EOF){
		distance = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		if(distance + v <= r1 + r2){
			cout << "Y" << endl;
		}else {
			cout << "N" <<endl;
		}

	}

	return 0;
}