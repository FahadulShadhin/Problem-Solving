# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ 

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buyPrice = 10001 # highest stock price 10^4. at first assume worst.
        profit = 0
        
        for val in prices:
            if val < buyPrice:
                buyPrice = val
            elif (val - buyPrice) > profit:
                profit = val - buyPrice
                    
        return profit
    
    """Example:
        prices = 7 1 5 3 6 4
        
        i=0:
            7 < buyPrice: buyPrice = 7
        i=1:
            1 < buyPrice: buyPrice = 1
        i=2:
            5 > buyPfirce and 5-1 = 4 > profit: so profit = 4
        i=3:
            3 > buyPrice and 3-1 = 2 < profit: so profit stays 4
        i=4:
            6 > buyPrice and 6-1 = 5 > profit: so profit = 5
        i=5:
            4 > buyPrice and 4-5=-1 < profit: so profit stays 5
        return profit
        
        ---------------------------------------------------------
        prices: 2 4 1
        
        i=0:
            2 < buyPrice: buyPrice = 2
        i=1:
            4 > buyPrice and 4-2 = 2 > profit: profit = 2
        i=2:
            1 < buyPrice but cannot sell: profit = 2
        return profit
    """