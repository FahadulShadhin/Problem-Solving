# https://leetcode.com/problems/surrounded-regions/ 

class Solution:
#     def dfs(self, r, c, board, rows, cols):
#         if r not in range(rows) or c not in range(cols) or board[r][c] != 'O':
#             return
        
#         directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        
#         board[r][c] = 'T'
        
#         for dx, dy in directions:
#             self.dfs(r+dx, c+dy, board, rows, cols)

    def bfs(self, r, c, board, rows, cols, visited):
        q = deque()
        
        q.append((r, c))
        board[r][c] = 'T'
        visited.add((r, c))
        
        while q:
            row, col = q.popleft()
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
            
            for dx, dy in directions:
                r, c = row+dx, col+dy
                if r in range(rows) and c in range(cols) and board[r][c] == 'O' and board[r][c] not in visited:
                    q.append((r, c))
                    board[r][c] = 'T'
                    visited.add((r, c))
        
        
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        rows, cols = len(board), len(board[0])
        visited = set()
        
        # find border 'O's and replace then with 'T's
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O' and (r in [0, rows-1] or c in [0, cols-1]):
                    self.bfs(r, c, board, rows, cols, visited)
                    # self.dfs(r, c, board, rows, cols)

        # replace 'O's with 'X's            
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O':
                    board[r][c] = 'X'

        # again replace 'T's with 'O's, these 'O's are not flipped
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'T':
                    board[r][c] = 'O'
                    