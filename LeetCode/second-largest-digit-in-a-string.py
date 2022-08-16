# https://leetcode.com/problems/second-largest-digit-in-a-string/ 

class Solution:
    def secondHighest(self, s: str) -> int:
        m = {}
        for i, c in enumerate(s):
            if c.isdigit():
                m[int(c)] = i
                
        if len(m) <= 1:
            return -1
        
        largest = second_largest = -1
        for val in m:
            if val > largest:
                second_largest = largest
                largest = val
            elif val < largest and val > second_largest:
                second_largest = val
                
        return second_largest