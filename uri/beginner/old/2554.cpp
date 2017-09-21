#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x, cont;
	string str, data;
	
	while(scanf(" %d %d", &n, &m) != EOF){
		data = "-1";
		while(m--){
			cin >> str;
			cont = 0;
			for(int i = 0; i < n; ++i){
				scanf(" %d", &x);
				if(x)
					++cont;
			}
			if(cont == n && data == "-1"){
				data = str;
			}
		}
		if(data != "-1")
			cout << data << endl;
		else
			printf("Pizza antes de FdI\n");
		
	}
	
	return 0;
}