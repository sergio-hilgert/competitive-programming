#include<bits/stdc++.h>

using namespace std;
const int maxn = 256;

int main(){
	
	int graph[maxn][maxn];
	int n, x, y;
	char str[32];
	
	while(scanf(" %d", &n) && n){
		memset(graph, 0, sizeof graph);
		while(scanf(" %d %d", &x, &y) && (x || y)){
			scanf(" %s", str);
			for(int i = 0; i < strlen(str); ++i){
				graph[x][y] |= 1 << (str[i] - 'a');
				//cout << "graph["<<x<<"][" << y <<"]: " << graph[x][y] << endl;
			}
			//cout << x << " " << y << " " << str << endl; 
		}
		
		//floyd warshall
		for(int k = 1; k <= n; ++k){
			for(int i = 1; i <= n; ++i){
				for(int j = 1; j <= n; ++j){
					graph[i][j] |= graph[i][k] & graph[k][j];
					//cout << "graph[" << i << "][" << j << "]: " << graph[i][j] << endl;
				}
			}	
		}
		while(scanf(" %d %d", &x, &y) && (x || y)){
			if(!graph[x][y]){
				printf("-\n");
				continue;
			}
			for(int i = 0; i < 26; ++i){
				if((graph[x][y] >> i ) & 1){
					printf("%c", (char) 'a' + i);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}