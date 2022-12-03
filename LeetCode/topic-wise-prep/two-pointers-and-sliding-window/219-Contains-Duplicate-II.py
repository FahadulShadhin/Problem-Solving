# https://leetcode.com/problems/contains-duplicate-ii/

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        hm = defaultdict(int)
        
        for i, val in enumerate(nums):
            if val in hm:
                if abs(hm[val] - i) <= k:
                    return True
            hm[val] = i
        
        return False

