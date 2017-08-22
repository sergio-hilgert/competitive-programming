#include<bits/stdc++.h>

using namespace std;

const int maxn = 2010;
int graph[maxn][maxn];
int visit[maxn][maxn];
int result_x, result_y, min_dist;

void bfs(int x, int y, int k){
	memset(visit, 0, sizeof visit);
	visit[x][y] = 1;
	queue<pair <int, int> > q;
	q.push(make_pair(x, y));
	pair<int, int> atual;
	while(!q.empty()){
		atual = make_pair(q.front().first, q.front().second); q.pop();
		if(atual.first >= 2000 || atual.second >= 2000) return;
		//cout << "atual: " << atual.first << " " << atual.second << endl;
		if(!visit[atual.first+1][atual.second]){
			if(graph[atual.first+1][atual.second] == k){
				result_x = atual.first+1;
				result_y = atual.second;
				visit[result_x][result_y] = visit[atual.first][atual.second] + 1;
				return;
			}else if (!graph[atual.first+1][atual.second]){
				q.push(make_pair(atual.first+1, atual.second));
				visit[atual.first+1][atual.second] = visit[atual.first][atual.second] + 1;
			}
		}
		if(!visit[atual.first][atual.second+1]){
			//cout<< "cuuu" << endl;
			if(graph[atual.first][atual.second+1] == k){
				result_x = atual.first;
				result_y = atual.second+1;
				visit[result_x][result_y] = visit[atual.first][atual.second] + 1;
				return;
			}else if (!graph[atual.first][atual.second+1]){
				q.push(make_pair(atual.first, atual.second+1));
				visit[atual.first][atual.second+1] = visit[atual.first][atual.second] + 1;
			}
		}
		if(!visit[atual.first-1][atual.second]){
			if(graph[atual.first-1][atual.second] == k){
				result_x = atual.first-1;
				result_y = atual.second;
				visit[result_x][result_y] = visit[atual.first][atual.second] + 1;
				return;
			}else if (!graph[atual.first-1][atual.second]){
				q.push(make_pair(atual.first-1, atual.second));
				visit[atual.first-1][atual.second] = visit[atual.first][atual.second] + 1;
			}
		}
		if(!visit[atual.first][atual.second-1]){
			if(graph[atual.first][atual.second-1] == k){
				result_x = atual.first;
				result_y = atual.second-1;
				visit[result_x][result_y] = visit[atual.first][atual.second] + 1;
				return;
			}else if (!graph[atual.first][atual.second-1]){
				q.push(make_pair(atual.first, atual.second-1));
				visit[atual.first][atual.second-1] = visit[atual.first][atual.second] + 1;
			}
		}
	}
}

void populate(){
	for(int i = 0; i < maxn; ++i){
		graph[0][i] = -1;
		graph[i][0] = -1;
	}
}

int main(){
	
	int n;
	int x, y;
	
	while(scanf(" %d", &n) && n){
		memset(graph, 0, sizeof graph);
		populate();
		while(n--){
			scanf(" %d %d", &x, &y);
			graph[x+1][y+1] = 1;
		}
		scanf(" %d", &n);
		while(n--){
			scanf(" %d %d", &x, &y);
			graph[x+1][y+1] = 2;
			
		}
		 
		bfs(x+1, y+1, 1);
		//cout << result_x << " " << result_y << endl;
		
		bfs(result_x, result_y, 2);
		
		printf("%d\n", visit[result_x][result_y] -1);
	}
	return 0;
}