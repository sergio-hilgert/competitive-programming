#include<bits/stdc++.h>

using namespace std;

const int maxn = 100005;
const long double EPS = 1e-10;
int arr[maxn];
int n, maior;
double a;
long long int soma;

double calcula(){
	double menor1 = 0.0;
	double maior1 = maior;
	double meio;
	double area = 0.0;
	
	while(menor1 <= maior1 + EPS && menor1 + EPS < maior1){
		meio = (double) (maior1 + menor1 )/ 2.0;
		area = 0.0;
		for(int i = 0; i < n; ++i){
			if(arr[i] < meio){
				break;
			}
			area += (double) arr[i] - meio;
		}
		
		if(a <= area + EPS && !(a + EPS < area)){
			menor1 = meio;
			break;
		}else if(area > a + EPS){
			menor1 = meio;
		}else{
			maior1 = meio;
		}
	}
	return menor1 + EPS; 
}

int main(){
	double result;
	while(scanf(" %d %lf", &n, &a) && (n || a)){
		maior = 0;
		soma = 0;
		memset(arr, 0, sizeof arr);
		for(int i = 0; i < n; ++i){
			scanf(" %d", &arr[i]);
			maior = max(arr[i], maior);
			soma += arr[i];
		}
		if(soma == a || a == 0){
			printf(":D\n");
		}else if(a > soma){
			printf("-.-\n");
		}else{
			sort(arr, arr + n, greater<int>());
			result = calcula();
			
			printf("%.4lf\n", result);
		}
	}
	
	return 0;
}