// Adjacent List
void bfs(int start, vector<int> graph[] , bool visited[]){
  queue<int> q;
  q.push(start);
  visited[start] = true;
  int actual;
  while(!q.empty()){
    actual = q.front(); q.pop();
    for(int i = 0; i < graph[actual].size(); ++i){
      if(!visited[graph[actual][i]]){
        // process here
        visited[graph[actual][i]] = true;
        q.push(graph[actual][i]);
      }
    }
  }
}

// Adjacent Matrix
void bfs(int start, int graph[][], bool visited[], int graph_size){
  queue<int> q;
  q.push(start);
  visited[start] = true;
  int actual;

  while(!q.empty()){
    actual = q.front(); q.pop();
    for(int i = 0; i < graph_size; ++i){
      if(graph[actual][i] && !visited[i]){
        // process here
        q.push(i);
        visited[i] = true;
      }
    }
  }
}