#include <bits/stdc++.h>

using namespace std;

string d, c;

void printaResult(){
	string nova = "$";
	int fim = d.size() % 3;
	int inicio = 0;

	nova += d.substr(inicio, !fim ? 3 : fim);
	inicio = !fim ? 3 : fim;
	if(inicio < d.size()){
		do{
			nova += ",";
			nova += d.substr(inicio, 3);
			inicio += 3;
		}while(inicio < d.size());
	}
	if(c.size() < 2)
		nova += ".0" + c;
	else
		nova += "." + c;
	cout << nova << endl;
}

int main(){

	while(cin >> d >> c){
		printaResult();
	}

	return 0;
}