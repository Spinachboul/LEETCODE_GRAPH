// BFS traveral of a Graph

// Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) { // V denotes the number of edges
        // The graphs are zero based indexing graphs as the node is starting from 0
        
        int vis[V] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0); // Queue will have the starting node
        vector<int> bfs;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
        
        // Code here
    }
