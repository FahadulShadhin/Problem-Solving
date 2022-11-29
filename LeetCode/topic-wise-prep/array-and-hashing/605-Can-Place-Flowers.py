# https://leetcode.com/problems/can-place-flowers/ 

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        cnt = 0
        
        if len(flowerbed) == 1:
            return True if flowerbed[0] == 0 or n == 0 else False
        
        if flowerbed[0] == 0 and flowerbed[1] == 0:
            flowerbed[0] = 1
            cnt += 1
        
        if flowerbed[-1] == 0 and flowerbed[-2] == 0:
            flowerbed[-1] = 1
            cnt += 1
        
        for i in range(1, len(flowerbed)-1):            
            if flowerbed[i] == 0 and flowerbed[i-1] == 0 and flowerbed[i+1] == 0:
                flowerbed[i] = 1
                cnt += 1
                    
        return True if cnt >= n else False

