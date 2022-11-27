# https://leetcode.com/problems/valid-perfect-square/ 
# neetcode: https://www.youtube.com/watch?v=Cg_wWPHJ2Sk&list=PLot-Xpze53leNZQd0iINpD-MAhMOMzWvO&index=3

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        left, right = 1, num
        
        while left <= right:
            mid = (left + right) // 2
            
            if mid*mid == num:
                return True
            elif mid*mid > num:
                right = mid - 1
            else:
                left = mid + 1
        
        return False