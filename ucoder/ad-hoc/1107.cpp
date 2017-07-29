#include <bits/stdc++.h>

using namespace std;

const int maxn = 512;


int main(){
	
	int n,m, x, maximo, maximoindex;
	int arr[maxn];
	
	scanf("%d %d", &n, &m);
	memset(arr, 0, sizeof arr);
	maximo = 0;
	for(int i = 0; i < n*m; ++i){
		scanf(" %d", &x);
		arr[i%n] += x;
		//cout << "arr[" << i%n << "]" << " = " << arr[i%n] << endl;
		if(maximo <= arr[i%n]){
			maximo = arr[i%n];
			maximoindex = i%n;
		}
	}
	
	// for(int i = 0; i < n; ++i){
	// 	cout << arr[i] << ' ';
	// }
	// cout << endl;
	printf("%d\n", maximoindex + 1);
	
	return 0;
}