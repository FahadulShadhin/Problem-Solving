# https://leetcode.com/problems/check-if-n-and-its-double-exist/ 

class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        if arr.count(0) > 1:
            return True
        
        m = {}
        for i, val in enumerate(arr):
            m[val] = i
            if val*2 in m and val != 0:
                return True
            elif val%2==0:
                if val/2 in m and val != 0:
                    return True
        return False