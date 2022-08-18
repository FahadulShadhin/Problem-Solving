# https://leetcode.com/problems/arithmetic-subarrays/ 

class Solution:
    def isArithmetic(self, arr: List[int]) -> bool:
        n = len(arr)
        diff = arr[1] - arr[0]
        for i in range(1, n):
            if (arr[i] - arr[i-1]) != diff:
                return False
        return True
    
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        res = []
        m = len(l)
        for i in range(m):
            temp = nums[l[i]: r[i]+1]
            if self.isArithmetic(sorted(temp)):
                res.append(True)
            else:
                res.append(False)
                
        return res