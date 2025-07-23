class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //kadanes algorithm
        int n = nums.size();
        int maxProduct = nums[0];  
        int minProduct = nums[0];  
        int result = nums[0];   

        for (int i = 1; i < n; ++i) {
            int current = nums[i];
            int tempMax = max({current, current * maxProduct, current * minProduct});
            int tempMin = min({current, current * maxProduct, current * minProduct});

            maxProduct = tempMax;
            minProduct = tempMin;

            result = max(result, maxProduct);
        }
        return result;
    }
};