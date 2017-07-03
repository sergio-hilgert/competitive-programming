#include<bits/stdc++.h>

using namespace std;



int main(){
	
	string str1;
	int str1_a, str2_b;
	double str1_b, pres;
	while(cin >> str1){
		scanf(" %lf", &pres);
		
		size_t ponto = str1.find('.');
		if(ponto == string :: npos){
			cout << str1 << endl;
			continue;
		}else{
			if(ponto > 0)
				str1_a = atoi(str1.substr(0, ponto).c_str());
			else
				str1_a = 0;
			str1_b = atof(str1.substr((int)ponto, str1.size() - (int) ponto).c_str());
			if(str1_b >= pres){
				printf("%d\n", str1_a + 1);
			}else{
				printf("%d\n", str1_a);
			}
		}
		
	}
	
	return 0;
}