# https://leetcode.com/problems/group-anagrams/ 
# Neetcode explanation: https://www.youtube.com/watch?v=vzdNOK2oB2E&ab_channel=NeetCode 

# O(m*n) 
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        
        for s in strs:
            freq = [0]*26
            for c in s:
                freq[ord(c) - ord('a')] += 1
            freq = tuple(freq)
            res[freq].append(s)
            
        return res.values()