//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        if (n == 0) {
            return 0;
        }

        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        dp[0][0] = grid[0][0];
        pq.push({grid[0][0], {0, 0}});

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            int currCost = curr.first;
            int i = curr.second.first;
            int j = curr.second.second;

            if (currCost > dp[i][j]) {
                continue;
            }

            for (auto& dir : directions) {
                int new_i = i + dir.first;
                int new_j = j + dir.second;
                if (new_i >= 0 && new_i < n && new_j >= 0 && new_j < n) {
                    int newCost = currCost + grid[new_i][new_j];
                    if (newCost < dp[new_i][new_j]) {
                        dp[new_i][new_j] = newCost;
                        pq.push({newCost, {new_i, new_j}});
                    }
                }
            }
        }

        return dp[n-1][n-1];
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends