#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	int maiu, minu, num, ac;
	
	while(getline(cin, str)){
		if(str.size() < 6 || str.size() > 32 ){
			printf("Senha invalida.\n");
			continue;
		}
		maiu = minu = num = ac = 0;
		for(int i = 0; i < str.size(); ++i){
			if(str[i] >= 'a' && str[i] <= 'z')
				minu = 1;
			else if(str[i] >= 'A' && str[i] <= 'Z')
				maiu = 1;
			else if(str[i] >= '0' && str[i] <= '9')
				num = 1;
			else
				ac = 1;
		}
		if(maiu && minu && num && !ac){
			printf("Senha valida.\n");
		}else{
			printf("Senha invalida.\n");
		}
	}
	
	
	
	return 0;
}