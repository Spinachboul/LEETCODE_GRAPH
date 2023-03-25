
// Using adacency matrix
int main(){
  int n, m;
  cin >> n >> m;
  int adj[n+1][m+1];
  for(int i=0 ; i<m ; i++){
    int u, int v;
    cin >> u >> v;
    adj[u][v] = 1;
    adj[v][u] = 1;
  }
  return 0;
}

// Using adjacency list
int main(){
  int n, m;
  cin >> n >> m;
  vector<int> adj(n+1);
  for(int i=0 ; i<m ; i++){
    int u,v;
    cin >> u >> v;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }
  return 0;
}
    
Above code snippets ----->   For storing undirected graph
TC : O(2 * number of edges)


<---------------------------------------------------------end of line----------------------------------------------------------->

// For storing directed graph --->  Adjacency list
int main(){
  int n,m;
  cin >> n >> m;
  vector<n+1> adj;
  for(int i=0 ;  i<m ; i++){
    adj[u].push_back(v);
    /* If the edge is u--->v*/
  }
  return 0;
}

<---------------------------------------------------------end of line----------------------------------------------------------->
    
