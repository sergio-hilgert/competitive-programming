#include <bits/stdc++.h>

using namespace std;

typedef long long huge;

const int inf = 0x3f3f3f3f;
const int maxn = 512;

struct point{
  int x;
  int y;
};

point points[maxn];
double graph[maxn][maxn];
double dist[maxn];
bool visited[maxn];
int peoples;

void connect_all(){
  for(int i = 0; i < peoples; ++i){
    for(int j = i+1; j < peoples; ++j){
      graph[i][j] = sqrt((points[j].x - points[i].x) * (points[j].x - points[i].x) + (points[j].y - points[i].y) * (points[j].y - points[i].y));
      graph[j][i] = sqrt((points[j].x - points[i].x) * (points[j].x - points[i].x) + (points[j].y - points[i].y) * (points[j].y - points[i].y));
    }
  }
}

double prim(){
  double cost = 0;
  dist[0] = 0;

  for (int i = 0; i < peoples; ++i){
    int minimum = -1;
    double best_dist = inf;

    for (int j=0; j < peoples; ++j){
      if(!visited[j] && dist[j] < best_dist){
        minimum = j;
        best_dist = dist[j];
      }
    }

    visited[minimum] = true;
    cost += dist[minimum];

    for (int j=0; j < peoples; ++j){
      if (!visited[j] && dist[j] > graph[minimum][j]){
        dist[j] = graph[minimum][j];
      }
    }
  }

  return cost;
}

void clear(){
  for(int i = 0; i < peoples; ++i){
    for(int j = 0; j < peoples; ++j)
      graph[i][j] = inf;

    dist[i] = inf;
    visited[i] = false;
  }
}

int main(){

  int n;
  scanf(" %d", &n);
  while(n--){
    scanf(" %d", &peoples);
    for(int i = 0; i < peoples; ++i){
      scanf(" %d %d", &points[i].x, &points[i].y);
    }
    clear();
    connect_all();
    printf("%.2lf\n", prim()/100.0);
    
  }
 

  return 0;
}
