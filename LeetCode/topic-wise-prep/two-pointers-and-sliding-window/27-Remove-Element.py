# https://leetcode.com/problems/remove-element/

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i, j = 0, len(nums) - 1
        while i <= j:
            if nums[i] != val:
                i += 1
            elif nums[i] == val and nums[j] != val:
                nums[i] = nums[j]
                nums[j] = val
                i += 1
                j -= 1
            else:
                j -= 1
                
        return i

