#include<bits/stdc++.h>

using namespace std;

const int maxn = 10;

int graph[maxn][maxn];
int visit[maxn][maxn];

void inicialize(){
	for(int i = 0; i < maxn; ++i){
		for(int j = 0; j < maxn; ++j){
			graph[i][j] = 1;
			visit[i][j] = 0;
		}
	}
}

void bfs(int i, int j){
	queue<pair<int, int> > q;
	q.push(make_pair(i, j));
	pair<int, int> atual;
	
	while(!q.empty()){
		atual = make_pair(q.front().first, q.front().second);
		q.pop();
		visit[atual.first][atual.second] = 1;
		if(!graph[atual.first + 1][atual.second] && !visit[atual.first + 1][atual.second]){
			q.push(make_pair(atual.first+1, atual.second));
		}
		if(!graph[atual.first - 1][atual.second] && !visit[atual.first - 1][atual.second]){
			q.push(make_pair(atual.first-1, atual.second));
		}
		if(!graph[atual.first][atual.second + 1] && !visit[atual.first][atual.second + 1]){
			q.push(make_pair(atual.first, atual.second+1));
		}
		if(!graph[atual.first][atual.second - 1] && !visit[atual.first][atual.second - 1]){
			q.push(make_pair(atual.first, atual.second-1));
		}
	}
	
}

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	while(n--){
		inicialize();
		for(int i = 1; i <= 5; ++i){
			for(int j = 1; j <= 5; ++j){
				scanf(" %d", &graph[i][j]);
			}
		}
		bfs(1, 1);
		
		if(visit[5][5])
			printf("COPS\n");
		else
			printf("ROBBERS\n");
	}
	
	return 0;
}