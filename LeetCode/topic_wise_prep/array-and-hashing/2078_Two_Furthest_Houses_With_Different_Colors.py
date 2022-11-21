# https://leetcode.com/problems/two-furthest-houses-with-different-colors/ 

class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        n = len(colors)
        
        maxDiff1, l1, r1 = 0, 0, n - 1
        while r1 > l1:
            if colors[l1] != colors[r1]:
                maxDiff1 = max(maxDiff1, abs(r1-l1))
            r1 -= 1
        
        maxDiff2, l2, r2 = 0, 0, n - 1
        while l2 < r2:
            if colors[l2] != colors[r2]:
                maxDiff2 = max(maxDiff2, abs(r2-l2))
            l2 += 1
                    
        return max(maxDiff1, maxDiff2)
