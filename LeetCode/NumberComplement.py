# https://leetcode.com/problems/number-complement/

class Solution:
    def findComplement(self, num: int) -> int:
        binary = format(num, 'b')
        complement = ""
        
        for b in binary:
            if b == '1':
                complement = complement + '0'
            else:
                complement = complement + '1'
                
        return int(complement, 2)