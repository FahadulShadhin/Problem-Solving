# https://leetcode.com/problems/shuffle-string/ 

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        n = len(indices)
        res = [0]*n
        
        for i in range(n):
            res[indices[i]] = s[i]
        
        return ''.join(res)