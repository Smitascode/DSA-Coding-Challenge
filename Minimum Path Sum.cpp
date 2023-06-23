class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int a = grid.size();
        int b = grid[0].size();

        for(int i = 1;i<a; i++){
            grid[i][0] += grid[i-1][0];

        }
        for(int j = 1; j<b; j++){
            grid[0][j] += grid[0][j-1];
        }

        for(int i = 1; i<a; i++){
            for(int j = 1; j<b; j++){
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[a-1][b-1];
    }
};
