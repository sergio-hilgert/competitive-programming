#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str = "`112QWASZX23WESDXC34ERDFCV45RTFGVB56TYGHBN67YUHJNM78UIJKM,89IOKL,.90OPL;./0-P[;'-=[]]\\";
	string entrada ;

	while(getline(cin, entrada)){
		for(int i = 0; i < entrada.size(); ++i){
			if(entrada[i] == ' ') continue;
			entrada[i] = str[distance(str.begin(), find(str.begin(), str.end(), entrada[i])) - 1];
		}
		cout << entrada << endl;
	}
	return 0;
}