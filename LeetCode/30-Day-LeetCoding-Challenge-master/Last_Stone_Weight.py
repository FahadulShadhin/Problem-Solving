class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        heap = []
        for item in stones:
            heapq.heappush(heap,(-item, item))
            
        while len(heap) > 1:
            x = heapq.heappop(heap)[1]
            y = heapq.heappop(heap)[1]
            
            if x != y:
                heapq.heappush(heap, (-(x-y), (x-y)))
        
        if len(heap) == 1:
            return heapq.heappop(heap)[1]
        else:
            return 0
