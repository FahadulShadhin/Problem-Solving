# https://leetcode.com/problems/find-lucky-integer-in-an-array/ 

class Solution:
    def findLucky(self, arr: List[int]) -> int:
        d = defaultdict(int)
        for val in arr:
            d[val] += 1
        
        lucky = -1
        for val, i in d.items():
            if val == i:
                lucky = max(val, lucky)
                
        return lucky