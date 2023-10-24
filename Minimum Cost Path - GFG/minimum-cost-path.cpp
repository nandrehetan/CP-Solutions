//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    bool isValid(int n, int m, int i, int j) {
        return (i >= 0 && j >= 0 && i < n && j < m);
    }

    int minimumCostPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        dp[0][0] = grid[0][0];

        set<pair<int, pair<int, int>>> s;
        s.insert({grid[0][0], {0, 0}});

        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        while (!s.empty()) {
            auto it = s.begin();
            int x = it->second.first;
            int y = it->second.second;
            int curr_cost = it->first;
            s.erase(it);

            for (int k = 0; k < 4; k++) {
                int new_x = x + dx[k];
                int new_y = y + dy[k];
                if (isValid(n, m, new_x, new_y) && dp[new_x][new_y] > dp[x][y] + grid[new_x][new_y]) {
                    if (dp[new_x][new_y] != INT_MAX) {
                        s.erase(s.find({dp[new_x][new_y], {new_x, new_y}}));
                    }
                    dp[new_x][new_y] = dp[x][y] + grid[new_x][new_y];
                    s.insert({dp[new_x][new_y], {new_x, new_y}});
                }
            }
        }
        return dp[n - 1][m - 1];
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