# https://leetcode.com/problems/is-subsequence/ 

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        sn, tn = len(s), len(t)  
        
        if sn > tn or (s and not t) or (sn == tn and s != t):
            return False
        if s == t or (not s and t) or (not s and not t):
            return True
        
        i, j = 0, 0
        while i < sn and j < tn:
            if s[i] == t[j]:
                i += 1
            j += 1
        
        if i == sn:
            return True
        else:
            return False
