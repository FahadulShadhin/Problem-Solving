# https://leetcode.com/problems/flood-fill/ 

class Solution:
    def bfs(self, sr, sc, rows, cols, image, start_color, color):
        q = deque()
        q.append((sr, sc))
        image[sr][sc] = color
        
        while(q):
            row, col = q.popleft()
            image[row][col] = color
            
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
            for dx, dy in directions:
                r, c = row + dx, col + dy
                
                if r in range(rows) and c in range(cols) and image[r][c] == start_color:
                    q.append((r, c))
                    
        return image
                
        
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        start_color = image[sr][sc]
        if start_color == color:
            return image
        
        rows, cols = len(image), len(image[0])
        
        return self.bfs(sr, sc, rows, cols, image, start_color, color)
