class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //XOR each number in nums first , then xor it with every number present in range(0,n)
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            ans = ans ^ nums[i];
        }
        for(int i=1; i<= n; i++)
        {
            ans = ans ^ i;
        }
        return ans;
    }
};