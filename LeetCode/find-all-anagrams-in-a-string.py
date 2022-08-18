# https://leetcode.com/problems/find-all-anagrams-in-a-string/ 

# TLE ---> O(s*p)
"""
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        s_freq = defaultdict(int)
        for c in s:
            s_freq[c] += 1
                
        t_freq = defaultdict(int)
        for c in t:
            t_freq[c] += 1
        
        return (s_freq == t_freq)
    
    
    def findAnagrams(self, s: str, p: str) -> List[int]:
        res = []
        start = 0
        end = len(p)-1
        
        if(len(p) > len(s)): return res
        
        while(end <= len(s)-1):
            temp = s[start:end+1]
            
            if self.isAnagram(temp, p):
                res.append(start)
            
            start += 1
            end += 1
            
        return res
"""

# Accepted using sliding window technique: O(s) 
# video explanation: https://www.youtube.com/watch?v=G8xtZy0fDKg&ab_channel=NeetCode

class Solution:    
    def findAnagrams(self, s: str, p: str) -> List[int]:
        res = []
        plen = len(p)
        slen = len(s)
        sCount, pCount = defaultdict(int), defaultdict(int)
        
        if plen > slen:
            return []
        
        for i in range(plen):
            pCount[p[i]] += 1
            sCount[s[i]] += 1
        
        if pCount == sCount:
            res.append(0)    
        
        left = 0
        for right in range(plen, slen):
            sCount[s[right]] += 1
            sCount[s[left]] -= 1
            
            if sCount[s[left]] == 0:
                sCount.pop(s[left])
            
            left += 1
            
            if pCount == sCount:
                res.append(left)
                
        return res