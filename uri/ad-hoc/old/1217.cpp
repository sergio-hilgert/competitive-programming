#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cont;
	double x, media, mediakg;
	string str, fruta;
	stringstream ss;

	scanf("%d", &n);

	media = mediakg = 0;
	for(int i = 1; i <= n; ++i){
		ss.str("");
		ss.clear();
		cont = 0;

		scanf("%lf", &x);
		getchar();
		getline(cin, str);
		ss << str;
		while(ss >> fruta){
			++cont;
		}

		printf("day %d: %d kg\n", i, cont);
		mediakg += cont;
		media += x;

	}

	printf("%.2lf kg by day\n", (mediakg/n));
	printf("R$ %.2lf by day\n",(media/n) );

	return 0;
}