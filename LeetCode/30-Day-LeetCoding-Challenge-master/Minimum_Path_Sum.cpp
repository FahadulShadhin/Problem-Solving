class Solution {
private:
    int sum[1001][1001];
    int large = 11111111111111;

    void min_path(int x, int y, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if(x == n-1 and y == m-1) return;
        
        if(x+1 < n and sum[x][y]+grid[x+1][y] < sum[x+1][y]) {
            sum[x+1][y] = sum[x][y] + grid[x+1][y];
            min_path(x+1, y, grid);
        } 
        
        if(y+1 < m and sum[x][y]+grid[x][y+1] < sum[x][y+1]) {
            sum[x][y+1] = sum[x][y] + grid[x][y+1];
            min_path(x, y+1, grid);
        }
    }
    
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                sum[i][j] = large;
        sum[0][0] = grid[0][0];
        
        min_path(0, 0, grid);
        return sum[n-1][m-1];
    }
};
