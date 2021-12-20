# https://leetcode.com/problems/valid-parentheses/submissions/

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        if len(s) <= 1:
            return False
        
        for c in s:
            if c == '(' or c == '{' or c == '[':
                stack.append(c)
            else:
                if stack:
                    p = stack.pop()
                    
                    if p != '(' and c == ')':
                        return False
                    elif p != '{' and c == '}':
                        return False
                    elif p != '[' and c == ']':
                        return False
                else:
                    return False
                
        if stack:
            return False
        else:
            return True