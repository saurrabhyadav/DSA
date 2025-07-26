class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for(int i = 0; i< intervals.size(); i++)
        {
            if(intervals[i][0] <= ans.back()[1])
            {ans.back()[1] = max(intervals[i][1], ans.back()[1]);}
            else
            {ans.push_back(intervals[i]);}
        }
        return ans;

    }
};