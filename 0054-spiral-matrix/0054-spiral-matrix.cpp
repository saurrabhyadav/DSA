class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startRow = 0; int startColumn = 0;
        int m = matrix.size(); int n = matrix[0].size();
        vector<int> ans;
        int endRow = m-1; int endColumn = n-1;
        while(startRow <= endRow && startColumn <= endColumn)
        {
            for(int i = startColumn; i <= endColumn; i++)
            {ans.push_back(matrix[startRow][i]);}
            startRow++;

            for(int i = startRow; i <= endRow; i++)
            {ans.push_back(matrix[i][endColumn]);}
            endColumn--;

            if(endRow >= startRow)
            {
                for(int i = endColumn; i >= startColumn; i--)
                {ans.push_back(matrix[endRow][i]);}
                endRow--;
            }

            if(endColumn >= startColumn)
            {
                for(int i = endRow; i >= startRow; i--)
                {ans.push_back(matrix[i][startColumn]);}
                startColumn++;
            }
        }
        return ans;
    }
};