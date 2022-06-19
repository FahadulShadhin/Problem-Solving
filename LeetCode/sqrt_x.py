# https://leetcode.com/problems/sqrtx/ 

class Solution:
    def mySqrt(self, x: int) -> int:
        """
        if x == 0 or x == 1:
            return x
        
        for i in range(x+1):
            if i*i == x:
                return i
            elif i*i > x:
                return i-1
        """
        
        i = 1
        while i*i <= x:
            i += 1
        return i-1
