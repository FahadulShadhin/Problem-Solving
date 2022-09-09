# https://leetcode.com/problems/binary-search/ 

class Solution:
    # Recursive solution 
    # def binarysearch(self, nums: List[int], left: int, right: int, target: int) -> int:
    #     if left > right:
    #         return -1
    #     mid = (left + right) // 2
        
    #     if nums[mid] == target:
    #         return mid
    #     if nums[mid] < target:
    #         return self.binarysearch(nums, mid+1, right, target)
    #     else:
    #         return self.binarysearch(nums, left, mid-1, target)
        
    def search(self, nums: List[int], target: int) -> int:
        """iterative Solution"""
        left = 0
        right = len(nums)-1
        
        while(left <= right):
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            
            if nums[mid] < target:
                left = mid+1
            else:
                right = mid-1
        return -1
        
        # recursive
        # res = self.binarysearch(nums, 0, len(nums)-1, target)
        return res