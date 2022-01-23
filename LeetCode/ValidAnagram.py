# https://leetcode.com/problems/valid-anagram/

"""Solution: 1"""
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        if sorted(s) != sorted(t):
            return False
            
        return True



"""Solution: 2"""
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        s_freq = {}
        for c in s:
            if c in s_freq:
                s_freq[c] += 1
            else:
                s_freq[c] = 1
                
        t_freq = {}
        for c in t:
            if c in t_freq:
                t_freq[c] += 1
            else:
                t_freq[c] = 1
                
        if s_freq != t_freq:
            return False
        
        return True