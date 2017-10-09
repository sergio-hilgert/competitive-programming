// Floyd Warshall finds the min distance from all nodes to all nodes
// O(n^3)
void floyd_warshall(int graph[][], int dist[][], int graph_size, int inf){
  // prepare the distance
  for(int i = 0; i < graph_size; ++i){
    for(int j = 0; j < graph_size; ++j){
      if(i == j)
        dist[i][j] = 0;
      else if(graph[i][j])
        dist[i][j] = graph[i][j];
      else
        dist[i][j] = inf;
    }
  }
  // calculate min distance
  for(int k = 0; k < graph_size; ++k){
    for(int i = 0; i < graph_size; ++i){
      for(int j = 0; j < graph_size; ++j){
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
  // use distance[from][to] to get result
}