# https://leetcode.com/problems/find-smallest-letter-greater-than-target/ 

class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        l, r = 0, len(letters)-1
        res = 'z'
        
        while l <= r:
            mid = (l + r) // 2
            
            if letters[mid] > target:
                res = min(letters[mid], res)
                r = mid - 1
            else:
                l = mid + 1
                
        return res if l < len(letters) else letters[0]