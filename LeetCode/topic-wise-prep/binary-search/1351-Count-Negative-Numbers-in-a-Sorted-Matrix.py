# https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/ 

class Solution:
    def search(self, arr: List[int], m: int) -> int:
        l, r = 0, m-1
        first_neg_pos = r+1
        
        while l <= r:
            mid = (l + r) // 2
            
            if arr[mid] >= 0:
                l = mid + 1
            else:
                first_neg_pos = min(mid, first_neg_pos)
                r = mid - 1
                
        return first_neg_pos
    
    def countNegatives(self, grid: List[List[int]]) -> int:
        m = len(grid[0])
        
        total_negs = 0
        for i in range(len(grid)):
            res = self.search(grid[i], m)
            if res < m:
                total_negs += (m - res)
                
        return total_negs
        
            