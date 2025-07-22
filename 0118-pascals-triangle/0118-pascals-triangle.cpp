class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> matrix (numRows);

        for(int row = 0; row < numRows; row++){
            matrix[row].push_back(1);
            for(int column = 1; column < row; column++){
                matrix[row].push_back(matrix[row-1][column] + matrix[row-1][column-1]);
            }
            if(row>0) matrix[row].push_back(1);
        }
        return matrix;
    }
};