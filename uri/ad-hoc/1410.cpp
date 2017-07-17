#include <bits/stdc++.h>

using namespace std;

const int maxn = 16;

int ata[maxn];
int def[maxn];

int main(){
	int a, d, imp, penultimo;
	
	while(scanf(" %d %d", &a, &d) && (a || d)){
		imp = 1;
		for(int i = 0; i < a; ++i)
			scanf(" %d", &ata[i]);
		
		for(int j = 0; j < d; ++j)
			scanf(" %d", &def[j]);
		
		sort(ata, ata+a);
		sort(def, def+d);
		
		penultimo = -1;
		int anterior = def[0];
		for(int i = 1; i < d; ++i){
			if(def[i] != anterior){
				penultimo = i;
				break;
			}
			anterior = def[i];
		}
		if(penultimo == -1 && ata[0] > def[0]){
			imp = 0;
		}else if(penultimo != -1 && ata[0] >= def[penultimo]){
			imp = 0;
		}else if(def[0] == def[1] && ata[0] == def[0]){
			imp = 0;
		}
		if(imp)
			printf("Y\n");
		else
			printf("N\n");
	}
	    
    
  return 0;
}