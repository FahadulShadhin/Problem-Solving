# https://leetcode.com/problems/concatenation-of-array/ 

class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [None]*(2*n)
        
        for i in range(2*n):
            ans[i] = nums[i] if i<n else nums[i-n]
                
        return ans