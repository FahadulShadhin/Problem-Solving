class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        max_val = 0
        cnt = 0
        mydict = {0: -1}
        
        for indx, item in enumerate(nums):
            if item == 1:
                cnt += 1
            else:
                cnt += -1
            
            if cnt == 0:
                max_val = indx + 1
            elif cnt in mydict:
                max_val = max(max_val, indx - mydict[cnt])
            else:
                mydict[cnt] = indx
                
        return max_val
