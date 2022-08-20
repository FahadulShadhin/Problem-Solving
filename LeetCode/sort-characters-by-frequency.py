# https://leetcode.com/problems/sort-characters-by-frequency/ 
# same as: https://leetcode.com/problems/top-k-frequent-elements/ 

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = []
        m = defaultdict(int)
        
        for val in nums:
            m[val] += 1
        
        n = len(nums)+1
        count = [[] for i in range(n+1)]
        
        for key, val in m.items():
            count[val].append(key)
        
        for i in range(n, 0, -1):
            if len(res) < k:
                if count[i]:
                    for val in count[i]:
                        res.append(val)
        
        return res