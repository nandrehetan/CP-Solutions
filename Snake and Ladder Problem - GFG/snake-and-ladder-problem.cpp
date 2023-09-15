//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int minThrow(int N, int arr[]) {
        // Create a map to represent snakes and ladders
        unordered_map<int, int> snakeLadderMap;
        for (int i = 0; i < 2 * N; i += 2) {
            snakeLadderMap[arr[i]] = arr[i + 1];
        }

        // Perform BFS
        queue<pair<int, int>> q;
        vector<bool> visited(31, false);  // To keep track of visited cells
        q.push({1, 0});  // Start from cell 1 with a dice throw count of 0
        visited[1] = true;

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            int currentCell = curr.first;
            int diceThrows = curr.second;

            // Try all possible dice throws (1 to 6)
            for (int dice = 1; dice <= 6; ++dice) {
                int nextCell = currentCell + dice;

                // If we reach or exceed the destination, return the number of dice throws
                if (nextCell >= 30) {
                    return diceThrows + 1;
                }

                // Check if there is a snake or ladder at the next cell
                if (snakeLadderMap.find(nextCell) != snakeLadderMap.end()) {
                    nextCell = snakeLadderMap[nextCell];
                }

                // If the next cell has not been visited, mark it as visited and enqueue it
                if (!visited[nextCell]) {
                    visited[nextCell] = true;
                    q.push({nextCell, diceThrows + 1});
                }
            }
        }

        return -1;  // If destination cannot be reached
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends