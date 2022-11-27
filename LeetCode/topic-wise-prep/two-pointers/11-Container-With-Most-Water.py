# https://leetcode.com/problems/container-with-most-water/ 

class Solution:
    def maxArea(self, height: List[int]) -> int:
        i, j = 0, len(height)-1
        mostWater = 0
        
        while i <= j:
            minIndx = i if height[i] < height[j] else j
            temp = (j-i) * height[minIndx]
            mostWater = max(mostWater, temp)
            
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
                
        return mostWater
            