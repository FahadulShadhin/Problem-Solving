# https://leetcode.com/problems/max-area-of-island/ 

class Solution:
    def calculateMaxArea(self, r, c, grid, rows, cols, visited):
        q = deque()
        visited.add((r, c))
        q.append((r, c))
        
        count = 0
        
        while(q):
            row, col = q.popleft()
            count += 1
            
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
            for dx, dy in directions:
                r, c = row + dx, col + dy
                
                if r in range(rows) and c in range(cols) and grid[r][c] == 1 and (r, c) not in visited:
                    q.append((r, c))
                    visited.add((r, c))
                    
        return count
    
    
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[0])
        visited = set()
        max_area = 0
        
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] and (r, c) not in visited:
                    t = self.calculateMaxArea(r, c, grid, rows, cols, visited)
                    max_area = max(max_area, t)
                
        return max_area
