class solition{
private:
  void dfs(int node,int vis[],vector<int> adj[],vector<int> &res){
      
      vis[node]=1;
      res.push_back(node);
      for(auto it : adj[node]){
          if(!vis[it]){
              dfs(it,vis,adj,res);
          }
      }
  }
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int start=0;
        vector<int> res;
        
        dfs(start,vis,adj,res);
        
        return res;
    }
};

Time complexity = O(n)+O(2*E)
