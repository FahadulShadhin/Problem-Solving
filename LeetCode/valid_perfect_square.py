# https://leetcode.com/problems/valid-perfect-square/

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        i = 1
        while i*i <= num:
            i += 1
        
        if (i-1)*(i-1) == num:
            return True
        else:
            return False