# https://leetcode.com/problems/validate-stack-sequences/ 

class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        n = len(pushed)
        m = len(popped)
        
        stack = []
        
        for val in pushed:
            stack.append(val)
            
            while len(stack) > 0 and stack[-1] == popped[0]:
                stack.pop()
                popped.pop(0)
                
        return True if len(stack)==0 else False