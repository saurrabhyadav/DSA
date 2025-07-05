class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //KADANE'S ALGORITHM
        int currentSum = 0;
        int maxSum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++)
        {
            currentSum += nums[i];
            currentSum = max(currentSum, nums[i]);
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
};