class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // additional space required,first store all non 0's and then all 0's later
        int n = nums.size();
        int left = 0;
        vector<int> m;

        for(int i = 0; i<n; i++)
        {
            if(nums[i] != 0) m.push_back(nums[i]);
        }
        for(int i = 0; i<n; i++)
        {
            if(nums[i] == 0) m.push_back(nums[i]);
        }
        for(int i = 0; i<n; i++)
        {
            nums[i] = m[i];
        }
    }
};