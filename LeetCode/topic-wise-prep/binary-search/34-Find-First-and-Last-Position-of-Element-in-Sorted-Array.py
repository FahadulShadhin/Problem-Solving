# https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/ 

class Solution:
    def firstPosition(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        ans = -1
        
        while left <= right:
            mid = (left + right) // 2
            
            if nums[mid] == target:
                ans = mid
                right = mid - 1
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return ans
    
    def lastPosition(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        ans = -1
        
        while left <= right:
            mid = (left + right) // 2
            
            if nums[mid] == target:
                ans =  mid
                left = mid + 1
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
                
        return ans
    
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        fp = self.firstPosition(nums, target)
        lp = self.lastPosition(nums, target)
        return [fp, lp]
