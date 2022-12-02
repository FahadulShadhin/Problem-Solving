# https://leetcode.com/problems/rotting-oranges/

class Solution:
    def bfs(self, rows, cols, grid, q):
        mnt = 0
        while q:
            for _ in range(len(q)):
                row, col = q.popleft()

                directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
                for dx, dy in directions:
                    r, c = row + dx, col + dy

                    if r in range(rows) and c in range(cols) and grid[r][c] == 1:
                        q.append((r, c))
                        grid[r][c] = 2
            if len(q):
                mnt += 1
                    
        return mnt
        
        
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows, cols, sr, sc = len(grid), len(grid[0]), 0, 0
        ans = 0
        q = deque()
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 2:
                    q.append((r, c))
                    
        ans = self.bfs(rows, cols, grid, q)
                    
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1:
                    return -1
                
        return ans

