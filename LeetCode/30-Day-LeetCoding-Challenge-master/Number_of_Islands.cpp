class Solution {
private:
    void solve(int x, int y, vector<vector<char>>& grid) {
        int dx[] = { 0, -1, 1, 0 }; 
        int dy[] = { -1, 0, 0, 1 };
        int rows = grid.size();
        int cols = grid[0].size();
        
        grid[x][y] = '0'; // visited...
        for(int i=0; i<4; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            
            if(new_x>=0 and new_x<rows and new_y>=0 and new_y<cols and grid[new_x][new_y] == '1')
                solve(new_x, new_y, grid);
        }
    }
    
    int count_islands(vector<vector<char>>& grid) {
        int cnt_islands = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    solve(i, j, grid);
                    cnt_islands++;
                }
            }
        }
        return cnt_islands;
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        return count_islands(grid);
    }    
};