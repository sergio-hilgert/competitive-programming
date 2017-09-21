#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	double multiplier, suma;
	string str;
	double array[10];

	scanf("%d", &n);
	
	memset(array, 0, sizeof array);

	while(n--){
		suma = 0;
		cin >> str;
		scanf("%lf", &multiplier);
		for(int i = 0 ; i < 7; ++i){
			scanf("%lf", &array[i]);
		}	
		sort(array, array + 7);
		for (int i = 1; i < 6; ++i){
			suma += array[i];
		}
		suma *= multiplier;
		cout << str;
		printf(" %.2lf\n", suma);
	}

	return 0;
}