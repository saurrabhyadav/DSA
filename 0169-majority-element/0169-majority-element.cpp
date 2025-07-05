class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = 0;
        int x= 0;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]> ans)
            {
                ans = m[nums[i]];
                x = nums[i];
            }
        }
        return x;
    }
};