# https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/ 

class Solution:  
    def isIncreasing(self, nums):
        for i in range(1, len(nums)):
            if nums[i] <= nums[i-1]:
                return False
        return True
    
    def canBeIncreasing(self, nums: List[int]) -> bool:
        possible = 0
        for i in range(1, len(nums)):
            if nums[i] <= nums[i-1] and i==len(nums)-1:
                possible = i
            else:
                if nums[i-1] >= nums[i]:
                    possible = i-1
                    if nums[i+1] > nums[i-1]:
                        possible = i

        nums.pop(possible)
        return True if self.isIncreasing(nums) else False