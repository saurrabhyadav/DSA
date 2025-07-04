class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return;
        k %= n;
        int i,j;
        // Reverse first n - k elements
        for( i=0,j=n-k-1; i<j; i++, j--)
        {
            int temp  = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        // Reverse last k elements
        for(i=n-k,j=n-1; i<j; i++, j--)
        {
            int temp  = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        // Reverse the entire array
        for(i=0,j=n-1; i<j; i++,j--)
        {
            int temp  = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
};