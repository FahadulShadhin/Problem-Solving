# https://leetcode.com/problems/sum-of-square-numbers/ 
# Binary Search + 2-pointers 

class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        left= 0
        right = int(sqrt(c))
        
        while left <= right:
            if left*left + right*right == c:
                return True
            elif left*left + right*right > c:
                right -= 1
            else:
                left -=1
                
        return False