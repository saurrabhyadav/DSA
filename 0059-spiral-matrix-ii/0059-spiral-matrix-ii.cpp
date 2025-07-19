class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startRow = 0; int startColumn = 0;
        vector<vector<int>> ans (n, vector<int> (n));
        int idx = 1;
        int endRow = n-1; int endColumn = n-1;
        while(startRow <= endRow && startColumn <= endColumn)
        {
            for(int i = startColumn; i <= endColumn; i++)
            {ans[startRow][i] = idx++;}
            startRow++;

            for(int i = startRow; i <= endRow; i++)
            {ans[i][endColumn] = idx++;}
            endColumn--;

            for(int i = endColumn; i >= startColumn; i--)
            {ans[endRow][i] =idx++;}
            endRow--;

            for(int i = endRow; i >= startRow; i--)
            {ans[i][startColumn] = idx++;}
            startColumn++;
        }
        return ans;
    }
};