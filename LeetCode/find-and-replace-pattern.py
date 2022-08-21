# https://leetcode.com/problems/find-and-replace-pattern/ 

class Solution:
    def matchPattern(self, s: str, t: str) -> bool:
        m = defaultdict(str)

        for i in range(len(s)):
            if s[i] in m:
                if m[s[i]] != t[i]:
                    return False
            elif t[i] in m.values():
                return False
            m[s[i]] = t[i]
        
        return True
    
    def findAndReplacePattern(self, words: List[str], pattern: str) -> List[str]:
        res = []
        
        for word in words:
            if self.matchPattern(pattern, word):
                res.append(word)
        
        return res