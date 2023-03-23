//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> ans;
    void bfs(int id, vector<int> adj[],vector<bool> &vis) {
        
        queue<int> q;
        q.push(id);
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            ans.push_back(cur);
            for(auto x:adj[cur]) {
                if(!vis[x]) {
                    q.push(x);
                    vis[x] =true;
                }
            }
        }
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V+1,false);
        vis[0]=true;
        bfs(0,adj,vis);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends