# https://leetcode.com/problems/number-of-different-integers-in-a-string/ 

class Solution:
    def numDifferentIntegers(self, word: str) -> int:
        nums = {}
        digits = ""
        
        for c in word:
            if c.isdigit():
                digits += c
            else:
                digits += " "
        
        digits = digits.split(" ")
        
        for val in digits:
            if val is not '':
                nums[int(val)] = 1
        
        return len(nums)