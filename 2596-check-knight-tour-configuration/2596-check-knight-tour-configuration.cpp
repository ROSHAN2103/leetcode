class Solution {
    bool dfs(vector<vector<int>>& grid, int row, int col, int step, int n) {
        if(step == n * n - 1) return true;
        
        int moves[8][2] = {
            {-2, -1}, {-2, 1},
            {-1, -2}, {-1, 2},
            {1, -2}, {1, 2},
            {2, -1}, {2, 1}
        };
        
        for(int i = 0; i < 8; i++){
            int newRow = row + moves[i][0];
            int newCol = col + moves[i][1];
            
            if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < n){
                if(grid[newRow][newCol] == step + 1){
                    if(dfs(grid, newRow, newCol, step + 1, n)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();    
        if(grid[0][0] != 0) return false;
        return dfs(grid, 0, 0, 0, row);
    }
};