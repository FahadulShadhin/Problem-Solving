class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        n = len(s)
        cnt_shift = 0
        
        for derection, amount in shift:
            if derection == 0:
                cnt_shift += amount
            else:
                cnt_shift -= amount
                
        cnt_shift = cnt_shift % n
        
        if cnt_shift < 0:
            cnt_shift = -cnt_shift
        else:
            cnt_shift = cnt_shift
        
        return s[cnt_shift:] + s[:cnt_shift]
