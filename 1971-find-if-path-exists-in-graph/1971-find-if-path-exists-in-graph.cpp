class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> umap;
        for(vector<int> edge : edges) {
            umap[edge[0]].push_back(edge[1]);
            umap[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(n, false);
        queue<int> q;
        
        q.push(source);
        visited[source] = true;
        
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            for(int v : umap[u]) {
                if(v == destination) return true;
                if(visited[v] == false) {
                    
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        
        return visited[destination];
    }
};