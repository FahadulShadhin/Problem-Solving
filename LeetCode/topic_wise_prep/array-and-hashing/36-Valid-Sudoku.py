# https://leetcode.com/problems/valid-sudoku/ 

class Solution:    
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        for i in range(9):
            checkRow = defaultdict(int)
            for val in board[i]:
                if val != '.':
                    if val in checkRow:
                        return False
                    checkRow[val] = 1
            
        j=0
        while j < 9:
            checkCol = defaultdict(int)
            for i in range(9):
                if board[i][j] != '.':
                    if board[i][j] in checkCol:
                        return False
                    checkCol[board[i][j]] = 1
            j+=1
            
        for i in range(9):
            for j in range(9):
                checkMat = defaultdict(int)
                rs, cs = (i // 3)*3, (j // 3)*3
                for r in range(rs, rs+3):
                    for c in range(cs, cs+3):
                        if board[r][c] != '.':
                            if board[r][c] in checkMat:
                                return False
                            checkMat[board[r][c]] = 1
                            
        return True  