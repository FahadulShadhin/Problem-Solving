# https://leetcode.com/problems/permutation-in-string/ 

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1len, s2len = len(s1), len(s2)
        
        if s1len > s2len:
            return False
        
        s1count, s2count = defaultdict(int), defaultdict(int)
        
        for i in range(s1len):
            s1count[s1[i]] += 1
            s2count[s2[i]] += 1
            
        if s1count == s2count:
            return True
        
        left = 0
        for right in range(s1len, s2len):
            s2count[s2[right]] += 1
            s2count[s2[left]] -= 1
            
            if s2count[s2[left]] == 0:
                s2count.pop(s2[left])
            
            if s1count == s2count:
                return True
            
            left += 1
        
        return False