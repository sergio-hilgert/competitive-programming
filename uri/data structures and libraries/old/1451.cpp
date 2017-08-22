#include <bits/stdc++.h>

using namespace std;

char linha[100010];
string result, temp;
int home;
int main(){
	
	while(scanf("%s", linha) != EOF){
		result = temp = "";
		home = 0;
		for(int i = 0; linha[i]; ++i){
			if(linha[i] == '['){
				result = temp + result;
				//cout << result << endl;
				temp = "";
				home = 1;
				continue;
			}
			if(linha[i] == ']'){
				if(home)
					result = temp + result;
				else
					result += temp;
				//cout << result << endl;
				temp = "";
				home = 0;
				continue;
			}
			
			if(home){
				temp += linha[i];
			}else{
				result += linha[i];
			}
		}
		if(temp.size() > 0)
			result = temp + result;
		cout << result << endl;
	}
	
	return 0;
}