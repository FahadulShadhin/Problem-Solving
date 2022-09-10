# https://leetcode.com/problems/single-element-in-a-sorted-array/ 

class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        n = len(nums)
        
        # to avoid list index out of range error
        if n == 1:
            return nums[0]
        if nums[0] != nums[1]:
            return nums[0]
        if nums[n-1] != nums[n-2]:
            return nums[n-1]
        
        # binary search starts 
        left, right = 1, n - 2
        
        while left <= right:
            mid = (left + right) // 2
            
            if nums[mid] != nums[mid+1] and nums[mid] != nums[mid-1]:
                return nums[mid]
            elif (mid%2 == 0 and nums[mid] == nums[mid+1]) or (mid%2 != 0 and nums[mid] == nums[mid-1]):
                left = mid + 1
            else:
                right = mid - 1