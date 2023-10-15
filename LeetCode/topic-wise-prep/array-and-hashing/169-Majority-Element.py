# https://leetcode.com/problems/majority-element/

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count_appears = {}
        n = len(nums)

        for i, val in enumerate(nums):
            if val in count_appears:
                count_appears[val] += 1
            else:
                count_appears[val] = 1
        
        for key, val in count_appears.items():
            if val > n//2:
                return key

