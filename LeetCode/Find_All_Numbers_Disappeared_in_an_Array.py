# https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

# naive with extra space :/
# class Solution:    
#     def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
#         range_nums = []
#         [range_nums.append(i) for i in range(1, len(nums)+1)]
#         ans = []
        
#         for i in range_nums:
#             if i not in nums:
#                 ans.append(i)
        
#         return ans

# accepted (using set)
class Solution:    
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        
        return list(
            set(range(1, len(nums)+1)) 
            - set(nums)
        )