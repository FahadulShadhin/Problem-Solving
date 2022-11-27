# https://leetcode.com/problems/powx-n/ 

class Solution:
    def calc(self, x: float, n: int) -> float:
        if x == 0:
            return 0
        if n == 0:
            return 1
        
        res = self.calc(x, n//2)
        res = res * res
        
        return res if n%2 == 0 else x*res
    
    def myPow(self, x: float, n: int) -> float:
        res = self.calc(x, abs(n))
        return res if n>=0 else 1/res