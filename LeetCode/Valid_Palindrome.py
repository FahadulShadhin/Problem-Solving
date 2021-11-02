# https://leetcode.com/problems/valid-palindrome/

class Solution:
    def isPalindrome(self, s: str) -> bool:
        chrs = "abcdefghijklmnopqrstuvwxyz0123456789"
        result = ""
        
        for c in s:
            if c.isupper():
                result += c.lower()
                
            if c in chrs:
                result += c
                
        if result == result[::-1]:
            return True
        else:
            return False