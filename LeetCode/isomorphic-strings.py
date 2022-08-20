# https://leetcode.com/problems/isomorphic-strings/ 

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        m = defaultdict(str)
        
        for i in range(len(s)):
            if s[i] in m:
                if m[s[i]] != t[i]:
                    return False
            elif t[i] in m.values():
                return False
            
            m[s[i]] = t[i]
        
        return True