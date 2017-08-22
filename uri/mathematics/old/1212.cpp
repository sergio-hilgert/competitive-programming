# include <bits/stdc++.h>

using namespace std;

long long int a ,b;
int stra, strb;
stringstream ss;

int vai1(int x){
	int cont = 0;
	int valor = 0, valorAnt = 0;
	while(x--){
		valor = a%10 + b%10 + valorAnt;
		if(valor >= 10){
			++cont;
			valorAnt = (valor)/10;
			a /= 10;
			b /= 10;
		}else{
			valorAnt = 0;
			a /= 10;
			b /= 10;
		}
		
	}
	return cont;
	

}

int main(){

	
	while(scanf("%lld %lld", &a, &b) && (a || b)){
		ss.str("");
		ss << a;
		stra = ss.str().size();
		ss.str("");
		ss << b;
		strb = ss.str().size();
		if (stra < strb)
			swap(stra, strb);
		int x = vai1(stra + 1);
		if(x){
			if(x > 1)
				printf("%d carry operations.\n", x );
			else
				printf("%d carry operation.\n", x );
		}
		else
			printf("No carry operation.\n");

	}


	return 0;
}