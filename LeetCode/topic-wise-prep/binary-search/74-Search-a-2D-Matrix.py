# https://leetcode.com/problems/search-a-2d-matrix/ 

class Solution:
    def binarySearch(self, arr: List[int], target: int) -> bool:
        l, r = 0, len(arr)-1
        while l <= r:
            mid = (l + r) // 2
            if arr[mid] == target:
                return True
            elif arr[mid] < target:
                l = mid + 1
            else:
                r = mid - 1
                
        return False
    
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in range(len(matrix)):
            if target >= matrix[i][0] and target <= matrix[i][-1]:
                if self.binarySearch(matrix[i], target):
                    return True
                
        return False