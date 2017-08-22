#include <bits/stdc++.h>

using namespace std;

const int maxn = 100;

struct node{
	int start;
	int end;
	double distance;
} graph[maxn*maxn + 10];

struct vertex{
	double x;
	double y;
} points [maxn + 10];

int parent[maxn + 10];
double dist[maxn + 10][maxn + 10];
int length;

bool cmp (node p, node q){
	if ( p.distance > q.distance )
  	return false;
	return true;
}

void calc_dist(int &n){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(dist[i][j] == -1)
				dist[i][j] = dist[j][i] = sqrt((points[i].x - points[j].x)*(points[i].x - points[j].x) + (points[i].y - points[j].y) * (points[i].y - points[j].y));
		}
	}
}

void limpa(){
	for(int i = 0; i < maxn + 10; ++i){
		for(int j = 0; j < maxn + 10; ++j)
			dist[i][j] = -1;
		parent[i] = i;
	}
		
}

void todos_todos(int &n){
	length = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			graph[length].start = i;
			graph[length].end = j;
			graph[length].distance = dist[i][j];
			++length;
		}
	}
	
  sort(graph, graph + length, cmp);
}

int main(){
	
	int testCases, n;
	int blank = 0;
	
	scanf(" %d", &testCases);
	
	while(testCases--){
		scanf(" %d", &n);
		limpa();
		
		for(int i = 0; i < n; ++i){
			scanf(" %lf %lf", &points[i].x, &points[i].y);
		}
		calc_dist(n);
		todos_todos(n);
		
		double result = 0;
    int edges = 1;
    for ( int i = 0; i < length && edges < n; ++i ) {
      
      if ( parent[graph[i].start] != parent[graph[i].end] ) {
        ++edges;
        result += graph[i].distance;
        for ( int j = 0; j < n; j++ ) {
          if ( parent[graph[i].end] == parent[j] && graph[i].end != j )
            parent[j] = parent[graph[i].start];
        }
        parent[graph[i].end] = parent[graph[i].start];
      }
    }

    if ( blank )
      printf ("\n");
    blank = true;
    printf ("%.2lf\n", result);
		
	}
	
	
	return 0;
}