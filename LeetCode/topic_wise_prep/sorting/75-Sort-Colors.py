# https://leetcode.com/problems/sort-colors/ 

class Solution:
    """ two pass: counting sort"""
    # def sortColors(self, nums: List[int]) -> None:        
    #     zeros, ones, twos = 0, 0, 0
    #     for num in nums:
    #         if num == 0:
    #             zeros += 1
    #         elif num == 1:
    #             ones += 1
    #         else:
    #             twos += 1
        
    #     i = 0
    #     while i < len(nums):
    #         if i < zeros:
    #             nums[i] = 0
    #         elif i >= zeros and i < zeros+ones:
    #             nums[i] = 1
    #         else:
    #             nums[i] = 2
                
    #         i += 1
            
    #     return nums
    
    """one pass: dutch partitioning problem"""
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        zero, one, two = 0, 0, len(nums) - 1
        
        while one <= two:
            if nums[one] == 0:
                nums[one], nums[zero] = nums[zero], nums[one]
                one += 1
                zero += 1
            elif nums[one] == 1:
                one += 1
            else:
                nums[one], nums[two] = nums[two], nums[one]
                two -= 1
                
        return nums
        