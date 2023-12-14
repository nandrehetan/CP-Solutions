#include <vector>

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> currentPath;

        dfs(graph, 0, graph.size() - 1, currentPath, result);

        return result;
    }

private:
    void dfs(const vector<vector<int>>& graph, int currentNode, int targetNode,
             vector<int>& currentPath, vector<vector<int>>& result) {
        currentPath.push_back(currentNode);
        if (currentNode == targetNode) {
            result.push_back(currentPath);
        } else {
            for (int neighbor : graph[currentNode]) {
                dfs(graph, neighbor, targetNode, currentPath, result);
            }
        }

        currentPath.pop_back();
    }
};
