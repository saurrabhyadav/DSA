class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();

        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            if(ans.empty() || ans.back()[1] <=intervals[i][0]) {
                ans.push_back(intervals[i]);
            }
            else if(ans.back()[1] > intervals[i][0]){
                ans.back()[1]= min(ans.back()[1], intervals[i][1] );
                count++;
            }
            else continue;
        }
        return count;
    }
};