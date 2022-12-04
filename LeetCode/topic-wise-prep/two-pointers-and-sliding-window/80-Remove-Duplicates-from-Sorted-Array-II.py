# https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        """
        0 0 1 1 1 1 2 3 3
            s | | | | | |    nums[s-2] != nums[f]; swap(nums[s], nums[f]); s+=1, f+=1
            f | | | | | |
              s | | | | |    nums[s-2] != nums[f]; swap(nums[s], nums[f]); s+=1, f+=1
              f | | | | |
                s | | | |    nums[s-2] == nums[f]; f+=1
                f | | | |
                s f | | |    nums[s-2] == nums[f]; f+=1
                s | f | |    nums[s-2] != nums[f]; swap(nums[s], nums[f]); s+=1, f+=1
                  s   f |    nums[s-2] != nums[f]; swap(nums[s], nums[f]); s+=1, f+=1
                    s   f    nums[s-2] != nums[f]; swap(nums[s], nums[f]); s+=1, f+=1
                      s  f   f == len(nums)-1; return s
        """
        
        s, f = 2, 2
        while f < len(nums):
            if nums[s-2] != nums[f]:
                nums[s], nums[f] = nums[f], nums[s]
                s += 1
            f += 1
            
        return s

