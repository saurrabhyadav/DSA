class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> matrix (numRows);

        for(int row = 0; row < numRows; row++){
            matrix[row].resize(row+1);
            matrix[row][0] = 1;
            for(int column = 1; column < row; column++){
                matrix[row][column] = matrix[row-1][column] + matrix[row-1][column-1];
            }
            matrix[row][row] = 1;
        }
        return matrix;
    }
};