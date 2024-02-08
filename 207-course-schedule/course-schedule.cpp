class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
        if (visited[node] == 1)
            return true;
        if (visited[node] == 2)
            return false;

        visited[node] = 1;
        
        for (int neighbor : adj[node]) {
            if (dfs(neighbor, adj, visited))
                return true; 
        }
        
        visited[node] = 2;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> visited(numCourses, 0); 
        for (auto& prerequisite : prerequisites) {
            int course = prerequisite[0];
            int prereq = prerequisite[1];
            adj[course].push_back(prereq);
        }        
        for (int i = 0; i < numCourses; ++i) {
            if (dfs(i, adj, visited))
                return false; 
        }
        
        return true; 
    }
};
