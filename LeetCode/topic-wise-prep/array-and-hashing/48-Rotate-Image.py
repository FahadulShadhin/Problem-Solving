# https://leetcode.com/problems/rotate-image/

class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        for i in range(len(matrix)):
            for j in range(i):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

        for i in range(len(matrix)):
            first, last = 0, len(matrix[i]) - 1
            while first <= last:
                matrix[i][first], matrix[i][last] = matrix[i][last], matrix[i][first]
                first += 1
                last -= 1
