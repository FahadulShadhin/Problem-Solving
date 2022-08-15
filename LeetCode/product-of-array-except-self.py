# https://leetcode.com/problems/product-of-array-except-self/ 

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        """
        n = len(nums)
        l, r = [1]*n, [1]*n
        
        # l[0] = 1
        for i in range(1, n):
            l[i] = nums[i-1] * l[i-1]
            
        r[n-1] = 1
        for i in range(n-2, -1, -1):
            r[i] = nums[i+1] * r[i+1]
            
        for i in range(n):
            nums[i] = l[i] * r[i]
            
        return nums
        """

        # without extra space (output array doesn't count as extra space)
        n = len(nums)
        res = [1]*n
        pre = 1
        for i in range(n):
            res[i] = pre
            pre *= nums[i]
            
        post = 1
        for i in range(n-1, -1, -1):
            res[i] *= post
            post *= nums[i]
            
        return res