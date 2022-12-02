# https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution:
    def isNum(self, t):
        if t != '+' and t != '-' and t != '*' and t != '/':
            return True
        
    def calculate(self, x, y, sign):
        ans = 0
        if sign == '+':
            ans = int(x + y)
        elif sign == '-':
            ans = int(x - y)
        elif sign == '*':
            ans = int(x * y)
        else:
            ans = int(x / y)
        return ans
        
    def evalRPN(self, tokens: List[str]) -> int:
        s = []
        
        for t in tokens:
            if self.isNum(t):
                s.append(t)
            else:
                x = s.pop()
                y = s.pop()
                sign = t
                # print(f"{x} {sign} {y}")
                s.append(self.calculate(int(y), int(x), sign))
            # print(f"stack: {s}")
        
        return s[0]

