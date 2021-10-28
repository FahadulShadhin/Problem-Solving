# https://leetcode.com/problems/implement-strstr/submissions/

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:
            return haystack.index(needle)
        elif needle == "":
            return 0
        else:
            return -1