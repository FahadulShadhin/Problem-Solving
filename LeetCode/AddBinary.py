# https://leetcode.com/problems/add-binary/ 
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if len(a) > len(b):
            zeros = ""
            len_diff = int(len(a) - len(b))
            for i in range(len_diff):
                zeros += '0'
            b = zeros + b
        elif len(b) > len(a):
            zeros = ""
            len_diff = int(len(b) - len(a))
            for i in range(len_diff):
                zeros += '0'
            a = zeros + a

        #print(a)
        #print(b)
        # print(int(b[0]))

        result = ""
        carry = 0
        for i in range(len(a)-1, -1, -1):
            r = carry
            #print(i)
            if int(a[i]) + int(b[i]) + r == 2:
                #print(str(int(a[i]) + int(b[i]) + r))
                result += '0'
                carry = 1

            elif int(a[i]) + int(b[i]) + r == 3:
                #print(str(int(a[i]) + int(b[i]) + r))
                result += '1'
                carrry = 1

            else:
                c = str(int(a[i]) + int(b[i]) + r)
                #print(str(int(a[i]) + int(b[i]) + r))
                result += c
                carry = 0

        if carry == 1:
            result += '1'

        #print(result)
        return result[::-1]
