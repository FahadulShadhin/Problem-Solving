# https://leetcode.com/problems/valid-parentheses/submissions/

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        # Empty string or only one bracket not valid
        if len(s) <= 1:
            return False
        
        # Iterate the string
        for c in s:
            # If find an opening bracket, push it to the stack
            if c == '(' or c == '{' or c == '[':
                stack.append(c)
            
            # Found a closing bracket
            else:
                if stack:
                    # Take the top opening bracket of the stack
                    p = stack.pop()
                    
                    # Compare the top opening bracket with current closing bracket
                    if p != '(' and c == ')':
                        return False

                    elif p != '{' and c == '}':
                        return False

                    elif p != '[' and c == ']':
                        return False
                
                # Stack empty, but closing bracket remaining, so not valid
                else:
                    return False
        
        # If after iterating the string, stack still not empty, then not valid
        if stack:
            return False
        else:
            return True