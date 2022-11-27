# https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/ 

class Solution:
    """O(n^2) | TLE
    def replaceElements(self, arr: List[int]) -> List[int]:
        if len(arr) == 1:
            return [-1]
        
        for i in range(len(arr)):
            maxVal = 0
            for j in range(i+1, len(arr)):
                maxVal = max(maxVal, arr[j])
            arr[i] = maxVal
                
        arr[len(arr)-1] = -1
        
        return arr
    """
    
    """
    Going forward gives O(n^2)
    Going backward gives O(n)
    """
    
    def replaceElements(self, arr: List[int]) -> List[int]:
        n = len(arr)
        if n == 1:
            return [-1]
        
        maxVal = -1
        
        for i in range(n-1, -1, -1):
            temp = arr[i]
            arr[i] = maxVal
            maxVal = max(maxVal, temp)
            
        return arr
            