# https://leetcode.com/problems/island-perimeter/ 

class Solution:
    def calculatePerimeter(self, r, c, grid, rows, cols, visited):
        q = deque()
        visited.add((r, c))
        q.append((r, c))
        perimeter = 0
        
        while q:
            row, col = q.popleft()
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
            count = 0
            for dx, dy in directions:
                r, c = row + dx, col + dy
                
                if r in range(rows) and c in range(cols) and grid[r][c] == 1 and (r, c) not in visited:
                    q.append((r, c))
                    visited.add((r, c))
                elif r not in range(rows) or c not in range(cols) or grid[r][c] == 0:
                    count += 1
            perimeter += count     

        return perimeter

        
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[0])
        visited = set()
        
        for r in range(rows):
            for c in range(cols):
                if (r, c) not in visited and grid[r][c] == 1:
                    return self.calculatePerimeter(r, c, grid, rows, cols, visited)
