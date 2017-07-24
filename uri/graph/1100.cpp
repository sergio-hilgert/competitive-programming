#include <bits/stdc++.h>

using namespace std;
const int maxn = 64;
const int inf = 0x3f3f3f3f;
int graph[maxn][maxn];
int moves;

int ii[8] = {-2, -2, -1, 1, 2, 2, -1, 1};
int jj[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
// calcular como fazer as arestas
void create_graph(){
	int I, J;
	for(int i = 0; i < maxn; ++i){
		for(int j = 0; j < maxn; ++j){
			if(i == j)
				graph[i][j] = 0;
			else
				graph[i][j] = inf;
		}
	}
	for(int i = 0; i < 8; ++i){
		for(int j = 0; j < 8; ++j){
			for(int k = 0; k < 8; ++k){
				I = i + ii[k];
				J = j + jj[k];
				if(I >= 0 && I < 8 && J >=0 && J < 8){
					graph[i*8 + j][I*8+J] = 1;
				}
			}
		}
	}
}

void floyd(){
	for(int k = 0; k < maxn; ++k){
		for(int i = 0; i < maxn; ++i){
			for(int j = 0; j < maxn; ++j){
				if(graph[i][j] > graph[i][k] + graph[k][j]){
					graph[i][j] = graph[i][k] + graph[k][j];
				}
			}
		}
	}
}

int main(){
	
	string str1, str2;
	create_graph();
	floyd();
	while(cin >> str1 >> str2){
		int i = (str1[0] - 'a') + ((8 - (str1[1] - '0')) * 8);
		int j = (str2[0] - 'a') + ((8 - (str2[1] - '0')) * 8);
		
		// cout << i << " " << j << endl;
		moves = graph[i][j];
		// for(int p = 0; p < maxn; ++p){
		// 	for(int  x = 0; x < maxn; ++x){
		// 		cout << graph[p][x] << " ";
		// 	}
		// 	cout << endl;
		// }
		cout << "To get from " << str1 << " to " << str2 << " takes " << moves << " knight moves.\n";
	}
	
	return 0;
}