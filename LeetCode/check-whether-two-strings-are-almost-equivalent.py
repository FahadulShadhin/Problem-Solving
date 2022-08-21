# https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/ 

class Solution:
    def checkAlmostEquivalent(self, word1: str, word2: str) -> bool:
        countw1, countw2 = [0]*26, [0]*26
        
        for c1 in word1:
            countw1[ord(c1) - ord('a')] += 1
        for c2 in word2:
            countw2[ord(c2) - ord('a')] += 1
        
        for i in range(26):
            if abs(countw1[i] - countw2[i]) > 3:
                return False
        return True