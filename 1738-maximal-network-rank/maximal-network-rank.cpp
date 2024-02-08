#include <vector>
using namespace std;

class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adj;
        adj.resize(n);

        for(auto it : roads) {
            int x = it[0];
            int y = it[1];

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int cur = adj[i].size() + adj[j].size();

                // Check if there's a direct connection between cities i and j
                bool directConnection = false;
                for(auto it : adj[i]) {
                    if(it == j) {
                        directConnection = true;
                        break;
                    }
                }
                if(directConnection) {
                    cur--;
                }
                
                ans = max(ans, cur);
            }
        }
        return ans;
    }
};
