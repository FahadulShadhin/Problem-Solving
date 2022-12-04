# https://leetcode.com/problems/baseball-game/

class Solution:
    def isNum(self, c):
        if c == '+' or c == 'D' or c == 'C':
            return False
        return True
        
    def calPoints(self, operations: List[str]) -> int:
        stack = deque()
        
        for op in operations:
            if self.isNum(op):
                stack.append(int(op))
            elif op == 'C':
                stack.pop()
            elif op == 'D':
                x = int(stack[-1])
                stack.append(x * 2)
            else:
                x, y = int(stack[-1]), int(stack[-2])
                stack.append(x + y)
            # print(stack)
         
        s = 0
        for num in stack:
            s = s + num
        return s

