class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        loop_range = math.floor(len(s)/2)
        n = len(s)-1
        for i in range(loop_range):
            s[i], s[n-i] = s[n-i], s[i]
