# https://leetcode.com/problems/two-sum/ 

# O(n) 
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m = dict()
        res = list()
        for i, val in enumerate(nums):
            if target-val in m:
                res.append(m[target-val])
                res.append(i)
            else:
                m[val] = i
                
        return res