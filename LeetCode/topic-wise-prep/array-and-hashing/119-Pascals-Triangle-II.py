# https://leetcode.com/problems/pascals-triangle-ii/

class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        ans = [1] * (rowIndex + 1)
        
        for i in range(2, rowIndex + 1):
            prev = ans[0]
            for j in range(1, i):
                temp = ans[j]
                ans[j] = prev + ans[j]
                prev = temp
        return ans

