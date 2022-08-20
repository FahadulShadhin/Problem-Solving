# https://leetcode.com/problems/word-pattern/ 

class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split(" ")
        m = defaultdict(str)
        
        if len(pattern) != len(s) or len(set(pattern)) != len(set(s)):
            return False
        
        for i in range(len(pattern)):
            if pattern[i] not in m:
                m[pattern[i]] = s[i]
                
        for i in range(len(s)):
            if s[i] != m[pattern[i]]:
                return False

        return True