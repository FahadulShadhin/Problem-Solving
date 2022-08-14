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

"""Example:
    nums: 2, 7, 11, 15
    target: 9
    
    i = 0:
        val = 2
        9 - 2 = 7 not in m:
            m[2] = 0
            
    i = 1:
        val = 7
        9 - 7 = 2 is in m:
            res.append(m[2]) = res.append(0)
            res.append(1)
            
    return [0, 1]
"""