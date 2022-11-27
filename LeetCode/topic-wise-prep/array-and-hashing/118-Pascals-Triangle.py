# https://leetcode.com/problems/pascals-triangle/ 

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pt = [[1]]
        
        for i in range(1, numRows):
            pre = pt[-1]
            curr = [0] * (len(pre) + 1)
            curr[0], curr[-1] = 1, 1

            for j in range(len(pre)):
                if curr[j] == 0:
                    curr[j] = pre[j-1] + pre[j]
            
            pt.append(curr)
            
        return pt
    