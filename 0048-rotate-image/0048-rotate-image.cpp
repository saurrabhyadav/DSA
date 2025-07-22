class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int topRow = 0;
        int bottomRow = n-1;

        while(topRow < bottomRow){
            for(int column=0; column<n; column++){
                int temp = matrix[topRow][column];
                matrix[topRow][column] = matrix[bottomRow][column];
                matrix[bottomRow][column] = temp;
            }
            topRow++;
            bottomRow--;
        }
        for(int row = 0; row<n-1; row++){
            for(int column = row+1; column<n; column++){
                int temp = matrix[row][column];
                matrix[row][column] = matrix[column][row];
                matrix[column][row] = temp;
            }
        }
    }
};