class Solution:
    def checkValidString(self, s: str) -> bool:
        n = len(s)
        balanced = 0
        for i in range(n):
            if s[i] == '(' or s[i] == '*':
                balanced+=1
            else:
                balanced-=1
            if balanced < 0:
                return False
        if balanced == 0:
            return True
        
        balanced = 0
        for i in range(n-1, -1, -1):
            if s[i] == ')' or s[i] == '*':
                balanced+=1
            else:
                balanced-=1
            if balanced < 0:
                return False
        return True