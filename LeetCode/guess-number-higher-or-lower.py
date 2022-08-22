# https://leetcode.com/problems/guess-number-higher-or-lower/ 

# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        left = 1
        right = n
        
        while left <= right:
            num = (left + right) // 2
            
            if guess(num) == 0:
                return num
            elif guess(num) == -1:
                right = num-1
            else:
                left = num+1