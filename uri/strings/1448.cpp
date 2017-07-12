#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, c3, c2, k = 1, errou1, errou2;
	string str1, str2, str3;
	
	scanf("%d", &n);
	getchar();
	while(n--){
		printf("Instancia %d\n", k++);
		c3 = c2 = 0;
		errou1 = errou2 = 110;

		getline(cin, str1);
		getline(cin, str2);
		getline(cin, str3);
		
		for(int i = 0; i < str1.size(); ++i){
			if(str1[i] == str2[i]){
				++c2;
			} else if(errou1 == 110) {
				//cout << "errou1: " << i << endl;
				errou1 = i;
			}
			if(str1[i] == str3[i]){
				++c3;
			}else if(errou2 == 110){
				errou2 = i; 
				//cout << "errou2: " << i << endl;
			}
			
			if(errou1 == errou2){
				errou1 = errou2 = 110;
			}
			
		}
		if(c2 > c3)
			printf("time 1\n");
		else if(c3 > c2)
			printf("time 2\n");
		else{
			if(errou1 > errou2)
				printf("time 1\n");
			else if (errou2 > errou1)
				printf("time 2\n");
			else
				printf("empate\n");
		}
		printf("\n");
	}
	
	return 0;
}