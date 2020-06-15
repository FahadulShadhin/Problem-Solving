# """
# This is BinaryMatrix's API interface.
# You should not implement it, or speculate about its implementation
# """
#class BinaryMatrix(object):
#    def get(self, x: int, y: int) -> int:
#    def dimensions(self) -> list[]:

class Solution:
    def leftMostColumnWithOne(self, binaryMatrix: 'BinaryMatrix') -> int:
        (rows, columns) = binaryMatrix.dimensions();
        current_row = 0
        current_column = columns - 1;
        
        while current_row < rows and current_column >= 0:
            if binaryMatrix.get(current_row, current_column) == 1:
                current_column -= 1
            else:
                current_row += 1
        
        if current_column != columns - 1:
            return current_column + 1
        else:
            return -1
