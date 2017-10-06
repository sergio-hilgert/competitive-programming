// Adjacent List
void dfs(int start, vector<int> graph[], bool visited[]){
  visited[start] = true;
  for(int i = 0; i < graph[start].size(); ++i){
    if(!visited[graph[start][i]]){
      // process the current vertex here
      dfs(graph[start][i], graph, visited);
    }
  }
}