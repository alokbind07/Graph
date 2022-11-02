//Undirected Graph

#include<iostream>
using namespace std;

int main(){
	
	int n,m;            //n is no. of nodes
	cin>>n>>m;          //m is no. of edges
	// 1 based indexing
	int adj[n+1][m+1];
	//graph here
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
	//Space Complexity = O(n*n)
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	
	vector<int> adj[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	//Space complexity = O(2*Edges)
}
