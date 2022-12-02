# https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/

class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        
        i, j, minDiff = 0, k-1, nums[-1]
        
        while j < len(nums):
            minDiff = min(minDiff, (nums[j] - nums[i]))
            i += 1
            j += 1
            
        return minDiff

