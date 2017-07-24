#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;

int graph[maxn][maxn];
int n, m, ins, qnt;
pair<int, int> direction;
string str;
char start;
int start_i, start_j;

void run_graph(int &i, int &j){
	qnt = 0;
	if(start == 'N'){
		direction = make_pair(-1, 0);
	}else if(start == 'L'){
		direction = make_pair(0, 1);
	}else if(start == 'S'){
		direction = make_pair(1, 0);
	}else{
		direction = make_pair(0, -1);
	}
	for(int k = 0; k < str.size(); ++k){
		if(str[k] == 'F'){
			if(i+direction.first >= 0 && i+direction.first < n && j+direction.second >= 0 && j+direction.second < m && graph[i+direction.first][j+direction.second]){
				if(graph[i+direction.first][j+direction.second] == 2){
					++qnt;
					graph[i+direction.first][j+direction.second] = 1;
				}
				i += direction.first;
				j += direction.second;
			}
		}else if(str[k] == 'D'){
			if(start == 'N'){
				direction = make_pair(0, 1);
				start = 'L';
			}else if(start == 'L'){
				direction = make_pair(1, 0);
				start = 'S';
			}else if(start == 'S'){
				direction = make_pair(0, -1);
				start = 'O';
			}else{
				direction = make_pair(-1, 0);
				start = 'N';
			}
		}else{
			if(start == 'N'){
				direction = make_pair(0, -1);
				start = 'O';
			}else if(start == 'L'){
				direction = make_pair(-1, 0);
				start = 'N';
			}else if(start == 'S'){
				direction = make_pair(0, 1);
				start = 'L';
			}else{
				direction = make_pair(1, 0);
				start = 'S';
			}
		}
	}
}

int main(){
	char c;
	
	while(scanf(" %d %d %d", &n, &m, &ins) && (n || m || ins)){
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				scanf(" %c", &c);
				if(c == '.'){
					graph[i][j] = 1;
				}else if(c == '*'){
					graph[i][j] = 2;
				}else if(c == '#'){
					graph[i][j] = 0;
				}else{
					graph[i][j] = 1;
					start = c;
					start_i = i;
					start_j = j;
				}
			}
		}
		cin >> str;
		run_graph(start_i, start_j);
		printf("%d\n", qnt);
	}
	
	return 0;
}