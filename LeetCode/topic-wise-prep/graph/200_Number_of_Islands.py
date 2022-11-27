# https://leetcode.com/problems/number-of-islands/ 

# iterative bfs solution 
class Solution:
    def bfs(self, r, c, rows, cols, visited, grid):
        q = deque()
        visited.add((r, c))
        q.append((r, c))

        direction_x = [1, -1, 0, 0]
        direction_y = [0, 0, 1, -1]
        
        while q:
            row, col = q.popleft()
            
            for i in range(4):
                r, c = row + direction_x[i], col + direction_y[i]
                
                if r in range(rows) and c in range(cols) and grid[r][c] == '1' and (r, c) not in visited:
                    q.append((r, c))
                    visited.add((r, c))
        
        
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows, cols = len(grid), len(grid[0])
        visited = set()
        islands = 0
        
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == '1' and (r, c) not in visited:
                    self.bfs(r, c, rows, cols, visited, grid)
                    islands += 1
                    
        return islands



# recursive dfs solution 
class Solution:
    def dfs(self, r, c, rows, cols, visited, grid):
        if r not in range(rows) or c not in range(cols) or grid[r][c] == '0' or (r, c) in visited:
            return
        
        visited.add((r, c))
        
        direction_x = [1, -1, 0, 0]
        direction_y = [0, 0, 1, -1]
        
        for i in range(4):
            self.dfs(r + direction_x[i], c + direction_y[i], rows, cols, visited, grid)
        
        
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows, cols = len(grid), len(grid[0])
        visited = set()
        islands = 0
        
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == '1' and (r, c) not in visited:
                    self.dfs(r, c, rows, cols, visited, grid)
                    islands += 1
                    
        return islands
                    