# https://leetcode.com/problems/find-target-indices-after-sorting-array/ 

class Solution:
    def leftIndex(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums)-1
        li = -1
        
        while(left <= right):
            mid = (left + right) // 2
            
            if nums[mid] == target:
                li = mid
                right -= 1
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return li
                
    def rightIndex(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums)-1
        ri = -1
        
        while(left <= right):
            mid = (left + right) // 2
            
            if nums[mid] == target:
                ri = mid
                left += 1
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return ri
    
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        
        li = self.leftIndex(nums, target)
        ri = self.rightIndex(nums, target)
        
        if li == ri:
            return [] if li == -1 else [li]
        else:
            res = []
            for i in range(li, ri+1):
                res.append(i)
            return res


# using hash map 
#     def targetIndices(self, nums: List[int], target: int) -> List[int]:
#         nums.sort()
#         d = defaultdict(list)
        
#         for i, val in enumerate(nums):
#             d[val].append(i)
        
#         for val in nums:
#             if val == target:
#                 return d[val]
#         return []