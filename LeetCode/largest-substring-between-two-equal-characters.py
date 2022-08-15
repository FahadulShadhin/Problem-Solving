# https://leetcode.com/problems/largest-substring-between-two-equal-characters/ 

class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        hmap = {}
        for val in s:
            hmap[val] = []
            
        for i, val in enumerate(s):
            hmap[val].append(i+1)
            
        ans = 0
        highest = -1
        for key in hmap:
            temp = hmap[key]
            if len(temp) > 1:
                ans = temp[len(temp)-1] - temp[0] - 1
                if ans > highest:
                    highest = ans
                    
        return highest