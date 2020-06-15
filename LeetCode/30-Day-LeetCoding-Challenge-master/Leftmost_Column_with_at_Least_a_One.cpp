/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int rows = binaryMatrix.dimensions()[0];
        int columns =  binaryMatrix.dimensions()[1];
        int current_row = 0;
        int current_column = columns - 1;
        
        while(current_row < rows and current_column >= 0) {
            if(binaryMatrix.get(current_row, current_column) == 1)
                current_column -= 1;
            else current_row += 1;
        } 
        if(current_column != columns - 1)
            return current_column + 1;
        else 
            return -1;
    }
};
