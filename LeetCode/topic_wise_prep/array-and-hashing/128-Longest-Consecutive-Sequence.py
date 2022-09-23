# https://leetcode.com/problems/longest-consecutive-sequence/ 
# Using set makes O(n) possible 
# But have to use extra space O(n)

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set(nums)
        
        longest = 0
        
        for num in nums:
            if num-1 not in numSet:
                length = 0
                while num+length in numSet:
                    length += 1
                longest = max(longest, length)
                
        return longest
                