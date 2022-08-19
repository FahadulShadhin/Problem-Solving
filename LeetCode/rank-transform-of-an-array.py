# https://leetcode.com/problems/rank-transform-of-an-array/ 

class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        if len(arr) == 0:
            return []
        
        temp = sorted(arr)
        d = defaultdict(int)
        d[temp[0]] = 1
        for i in range(1, len(temp)):
            if temp[i] != temp[i-1]:
                d[temp[i]] = d[temp[i-1]] + 1
                
        res = []
        for val in arr:
            res.append(d[val])
        
        return res