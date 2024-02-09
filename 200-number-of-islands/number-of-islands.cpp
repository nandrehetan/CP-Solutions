class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int numIslands = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    ++numIslands;
                    dfs(grid, i, j);
                }
            }
        }
        
        return numIslands;
    }
    
    void dfs(std::vector<std::vector<char>>& grid, int row, int col) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        if (row < 0 || col < 0 || row >= rows || col >= cols || grid[row][col] != '1') return;
        
        grid[row][col] = '0'; 
        
        dfs(grid, row + 1, col);
        dfs(grid, row - 1, col);
        dfs(grid, row, col + 1);
        dfs(grid, row, col - 1);
    }
};
