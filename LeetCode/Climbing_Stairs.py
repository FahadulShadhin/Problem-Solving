# https://leetcode.com/problems/climbing-stairs/
class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        if n == 2:
            return 2
        if n == 3:
            return 3
        
        p1 = 0
        p2 = 1
        ans = 0
        
        for i in range(n):
            ans = p1 + p2
            p1 = p2
            p2 = ans
            
        return ans