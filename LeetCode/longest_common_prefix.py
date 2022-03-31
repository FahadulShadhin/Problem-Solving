class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        comp = strs[0]
        for i in range(1, len(strs)):
            temp = ""
            for j in range(min(len(comp), len(strs[i]))):
                if comp[j] == strs[i][j]:
                    temp = temp + strs[i][j]
                else:
                    break
            comp = temp
        
        return comp