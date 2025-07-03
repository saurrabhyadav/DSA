class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //sliding  window
        int n = nums.size();
        int left = 0;
        int ans = 0;
        for(int right = 0; right < n; right++)
        {
            if(nums[right] == 0)
            {left = right+1;}
            else
            {
                int x = right-left+1;
                ans = (ans>x) ? ans:x;
            } 
        }
        return ans;
    }
};