class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        for index, item in enumerate(nums):
            nums[index] = nums[index]*nums[index]
            
        nums.sort()
        return nums